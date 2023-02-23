#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns zero
 */
int main(void)
{
	long int n;
	long int div;
	long int max_fact;

	n = 612852475143;
	div = 2;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			n = n / div;
			max_fact = div;
		}
		if (n == 1)
		{
			printf("%lu\n", max_fact);
			break;
		}
	}
	return (0);
}

