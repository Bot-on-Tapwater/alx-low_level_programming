#include "main.h"

/**
 * _isdigit - checks whether a character is an integer
 * @c: an integer
 *
 * Return: returns either 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
