#include "main.h"
/**
 * _puts - prints a sing to stdout
 * @s: sing to be printed out
 *
 * Return: returns nothing
 */
void _puts(char *s)
{
	int i = 0;
	char hold_char;

	while (1)
	{
		if (s[i])
		{
			hold_char = s[i];
			_putchar(hold_char);
			i++;
		}

		else if (!s[i])
		{
			break;
		}
	}
	_putchar(10);
}
