#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet - prints lowercase english alphabet
 *
 * Return: Returns void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar(10);
}
