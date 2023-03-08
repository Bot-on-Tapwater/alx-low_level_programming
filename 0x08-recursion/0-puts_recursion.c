#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
	{
		_putchar('\n'); /* prints a newline character */
		return;
	}
	_putchar(*s); /* print the current character */
	_puts_recursion(s + 1);
}
