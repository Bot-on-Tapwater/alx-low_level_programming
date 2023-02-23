#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns zero
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int sum = 0;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		sum = a + b;
		printf("%ld", sum);
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
