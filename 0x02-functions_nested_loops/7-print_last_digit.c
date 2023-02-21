#include "main.h"
#include "_putchar.c"

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
	}
	_putchar(i % 10 + '0');
	return (i % 10);
}
