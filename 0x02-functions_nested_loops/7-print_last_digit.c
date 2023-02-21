#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @i: an integer
 *
 * Return: returns last digit of an integer
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		i *= -1;
		_putchar('0' + i % 10);
		return (i % 10);
	}
	else
	{
		int a = -(i % 10);
		_putchar(a + '0');
		return (a + '0');
	}
}
