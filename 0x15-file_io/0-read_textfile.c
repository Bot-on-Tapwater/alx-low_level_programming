#include <stdio.h>
#include <sys/types.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: string containing filename
 * @letters: number of characters to be printed
 *
 * Return: 0 or no. of printed chars
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp; /* pointer to File object */
	char c; /* chars in textfile */
	int write_check;
	ssize_t charpr = 0; /* no. of chars printed */

	fp = fopen(filename, "r"); /* open file in read only mode */

	if (fp == NULL || filename == NULL)
	{
		return (0);
	}

	while ((c = fgetc(fp)) != EOF && (size_t)charpr != letters)
	{
		write_check = write(1, &c, 1); /* prints out characters */

		if (write_check == -1)
		{
			return (0);
		}
		else
		{
			charpr++; /* increment char printed by 1 */
		}
	}

	fclose(fp); /* close file */
	return (charpr);
}
