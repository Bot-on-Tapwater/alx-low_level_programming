#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it.
 *
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	size_t bytes_read;
	size_t bytes_written;

	if (filename == NULL) /* filename is NULL? */
		return (0);

	file = fopen(filename, "r"); /* open in read mode */
	if (file == NULL)
	{
		return (0);
	}

	buffer = malloc(letters); /* mem allocation */
	if (buffer == NULL)
	{
		fclose(file); /* free resources */
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, file); /* read file */
	if (bytes_read == 0) /* no bytes read */
	{
		free(buffer); /* free resources */
		fclose(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read); /* print */
	free(buffer); /* free resources */
	fclose(file);

	if (bytes_written != bytes_read) /* write successful? */
	{
		return (0);
	}

	return (bytes_written);
}
