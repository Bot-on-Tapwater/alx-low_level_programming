#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed out
 *
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int counter = 0;
	int i;

	while (1)
	{
		if (str[counter])
		{
			counter++;
		}
		else if (!str[counter])
		{
			break;
		}
		/* printf("\nValue of counter = %d\n", counter); */
	}
	if (counter % 2 == 1)
	{
		i = counter / 2;
	}
	else
	{
		i = (counter - 1) / 2;
	}

	for (i++; i < counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
