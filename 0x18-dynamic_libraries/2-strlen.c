#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be determnied
 *
 * Return: returns length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (s[i])
		{
			/* printf("\nOne of the charachters is \'%c\'\n", s[i]); */
			i++;
		}
		else if (!s[i])
		{
			break;
		}
	}
	return (i);
}
