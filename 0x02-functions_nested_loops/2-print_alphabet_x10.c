#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase english alphabet
 *
 * Return: Returns void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
