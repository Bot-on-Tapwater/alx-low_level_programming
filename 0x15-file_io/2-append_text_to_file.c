#include <stdio.h>
#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - creates a file
 * @filename: name of file to be created
 * @text_context: text to be written to file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_context)
{
	FILE *fp; /* pointer to a FILE object */
	int write_check;

	if (access(filename, F_OK) == 0) /* if file exists) */
	{
		fp = fopen(filename, "a"); /* open file in append */

		if (fp == NULL || filename == NULL)
			return (-1);
		write_check = fwrite(text_context, sizeof(char), strlen(text_context), fp);
		if (write_check == -1) /* write unsuccessful */
			return (-1);
		fclose(fp); /* close file */
		return (1);
	}
	else /* File doesn't exists */
	{
		return (-1);
	}
}
