#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string to be copied
 *
 * Return: either NULL or pointer to copied string
 */
char *_strdup(char *str)
{
	char *cp_str; /* Holds a copy of str */
	int i; /* Variable for "for" loop */
	int len = 0; /* Length of str */

	if (str == 0)
		/* return null if str = NULL */
		return (0);

	while (str[len] != '\0') /* Get length of str */
		len++;
	/* (len + 1) takes care of null terminator */
	cp_str = malloc(sizeof(char) * (len + 1));

	if (cp_str == 0)
		/* return null if malloc fails */
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		cp_str[i] = str[i]; /* Copy values of str to cp_str */
	}

	/* return pointer to duplicated string */
	return (cp_str);
}
