#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: A single character to be checked
 *
 * Return: Returns either 1 or 0
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}

