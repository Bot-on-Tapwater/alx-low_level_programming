#include "main.h"
#include "_putchar.c"

/**
 * print_sign - checks signage of an integer
 * @n: An integer
 *
 * Return: Returns either 1, 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

