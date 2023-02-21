#include "main.h"

/**
 * _isalpha - checks if character is a letter
 * @c: A single character to be checked
 *
 * Return: Returns either 1 or 0
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

