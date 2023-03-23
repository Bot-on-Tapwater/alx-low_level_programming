#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers
 * @n: number of integers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%u%s", va_arg(args, unsigned int), separator);
		}
		else
		{
			printf("%u", va_arg(args, unsigned int));
		}
	}
	printf("\n");
}
