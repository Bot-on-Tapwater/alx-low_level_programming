#include "main.h"
void insert_spaces(int k);

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 *
 * Return: returns void
 */
void print_diagonal(int n)
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
			insert_spaces(i);
			_putchar('\\');
			_putchar(10);
		}
	}
}

/**
 * insert_spaces - insert empty spaces
 * @k: an integer
 *
 * Return: returns void
 */
void insert_spaces(int k)
{
	int j;

	for (j = 0; j < k; j++)
	{
		_putchar(' ');
	}
}
