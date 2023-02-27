#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed out
 *
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int j;
	char hold_char;

	while (1)
	{
		if (s[i])
		{
			i++;
		}

		else if (!s[i])
		{
			break;
		}
	}

	for (j = (i - 1); j >= 0; j--)
	{
		hold_char = s[j];
		_putchar(hold_char);
	}
	_putchar(10);
}
