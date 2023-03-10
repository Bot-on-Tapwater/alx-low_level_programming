#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located in string
 *
 * Return: returns null or pointer to c in s
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] >= '\0')
	{
		if (s[count] == c)
		{
			return (&(s[count]));
		}
		count++;
	}
	return (0);
}
