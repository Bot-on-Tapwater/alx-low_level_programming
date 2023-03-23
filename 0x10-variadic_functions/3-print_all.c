#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0; /* iterates through format string */
	char *str, *sep = ""; /* pointers to strings for (nil) and separtors */
	va_list list; /* holds variable arguments */

	va_start(list, format); /* list to start after "format" argument */

	if (format) /* check if format string is not empty */
	{
		while (format[i]) /* iterate through format string */
		{
			switch (format[i]) /* switch statement checks the argument */
			{
				case 'c': /* if argument is a character */
					printf("%s%c", sep, va_arg(list, int)); /* print the character */
					break;
				case 'i': /* if the argument is an integer */
					printf("%s%d", sep, va_arg(list, int)); /* print the integer */
					break;
				case 'f': /* if the argument is a float */
					printf("%s%f", sep, va_arg(list, double)); /* print the float */
					break;
				case 's': /* if the argument is a string */
					str = va_arg(list, char *); /* get string argument */
					if (!str) /* if string is NULL */
						str = "(nil)"; /* set the string to (nil) */
					printf("%s%s", sep, str); /* print the string with the separator */
					break;
				default: /* if the argument is of unknown type */
					i++; /* increment counter to move to next argument */
					continue; /* skip unknown argument */
			}
			sep = ", "; /* set sep to ", " after first argument */
			i++; /* move to the next character in the format string */
		}
	}
	printf("\n"); /* print a newline character */
	va_end(list); /* clean up the variable argument list */
}
