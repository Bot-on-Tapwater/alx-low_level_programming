#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - copy the contents of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or an error code
 */
int main(int argc, char **argv)
{
	int file_from, file_to, read_count, write_count;
	char buffer[BUFFER_SIZE];

	/* check if the correct number of arguments was provided */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* open the source file */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1) /* check for errors opening the source file */
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* create the destination file and open it for writing */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1) /* check for errors creating or opening file_to */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* read and write the file in chunks of BUFFER_SIZE */
	do {
		read_count = read(file_from, buffer, BUFFER_SIZE); /* read a chunk of data */
		if (read_count == -1) /* check for errors reading the source file */
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_count = write(file_to, buffer, read_count); /* write to file_to */
		if (write_count == -1) /* check for errors writing to the destination file */
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	} while (read_count > 0);

	/* close the file descriptors for both files and check for errors */
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
