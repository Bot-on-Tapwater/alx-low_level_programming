#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string printed between numbers
 * @n: number of integers
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
		char *str = va_arg(args, char *);

			if (i != n - 1)
		{
			if (str != NULL)
			{
				printf("%s%s", str, separator);
			}
			else
			{
				printf("(nil)%s", separator);
			}
		}
		else
		{
			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(args);
}
