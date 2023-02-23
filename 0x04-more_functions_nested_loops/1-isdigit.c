#include "main.h"

/**
 * _isdigit - checks whether a character is an integer
 * @c: an integer
 *
 * Return: returns either 1 or 0
 */
int _isdigit(int c)
{
	int i;

	/* printf("We are currently testing %d.\n\n", c); */

	for (i = 48; i < 58; i++)
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
