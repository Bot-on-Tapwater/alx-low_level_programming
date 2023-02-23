#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: single character
 *
 * Return: returns either 0 or 1
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
