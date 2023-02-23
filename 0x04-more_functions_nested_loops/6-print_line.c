#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: an integer
 *
 * Return: returns void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
