#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns zero
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int i;
	unsigned long int sum = 0;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;
		printf("%lu", sum);
		if (i < 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		a = b;
		b = sum;
	}
	return (0);
}
