#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @i: an integer
 *
 * Return: returns last digit of an integer
 */
int print_last_digit(int i)
{
	int j;
	int k;

	j = i % 10;
	if (j >= 0)
	{
	_putchar(j + '0');
		return (j);
	}
	else if (j < 0)
	{
		k = (j * -1);
		_putchar(k + '0');
		return (k);
	}
	return (0);
}
