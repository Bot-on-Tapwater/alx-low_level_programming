#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to be printed out
 *
 * Return: returns nothing
 */
void _puts(char *str)
{
	int i = 0;
	char hold_char;

	while (1)
	{
		if (str[i])
		{
			hold_char = str[i];
			_putchar(hold_char);
			i++;
		}

		else if (!str[i])
		{
			break;
		}
	}
	_putchar(10);
}
