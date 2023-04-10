#include <stdio.h>
#include <sys/stat.h>
#include <stdio.h>
#include <sys/types.h>
#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_context: text to be written to file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_context)
{
	FILE *fp;
	mode_t mode;
	int write_check;
	int chmod_check;

	if (access(filename, F_OK) == 0)
	{
		fp = fopen(filename, "w");

		if (fp == NULL || filename == NULL)
			return (-1);
		write_check = fwrite(text_context, sizeof(char), strlen(text_context), fp);
		if (write_check == -1)
			return (-1);
		fclose(fp);
		return (1);
	}
	else
	{
		fp = fopen(filename, "w");

		if (fp == NULL || filename == NULL)
			return (-1);
		write_check = fwrite(text_context, sizeof(char), strlen(text_context), fp);
		if (write_check == -1)
			return (-1);
		fclose(fp);

		mode = S_IRUSR | S_IWUSR;
		chmod_check = chmod(filename, mode);

		if (chmod_check != 0)
			return (0);
		return (1);
	}
}
