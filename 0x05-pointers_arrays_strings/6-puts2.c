#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed out
 *
 * Return: returns nothing
 */
void puts2(char *str)
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

	for (i = 0; i < counter; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else if (i % 2 == 1)
		{
			continue;
		}
	}
	putchar(10);
}
