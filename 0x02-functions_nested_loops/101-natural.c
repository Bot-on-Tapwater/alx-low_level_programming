#include <stdio.h>

/**
 * natural - prints out sum of multiples of 3 & 5
 *
 * Return: returns void
 */
void natural(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}

/**
 * main - Entry point
 *
 * Return: returns zero
 */
int main(void)
{
	natural();
	return (0);
}
