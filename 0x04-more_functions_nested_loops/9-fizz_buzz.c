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

	putchar(1 + '0');

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
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
