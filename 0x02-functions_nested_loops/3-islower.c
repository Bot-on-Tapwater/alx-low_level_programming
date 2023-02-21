#include "main.h"
#include "_putchar.c"
#include <ctype.h>

/**
 * _islower - checks if character is lowercase
 * @c: A single character to be checked
 *
 * Return: Returns either 1 or 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

