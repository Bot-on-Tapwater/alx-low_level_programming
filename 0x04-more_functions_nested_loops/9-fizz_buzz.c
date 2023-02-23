#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - fizzbuzz
 *
 * Return: returns void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	putchar(10);
}

/**
 * main - entry point
 *
 * Return: returns void
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
