#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints upto 98
 * @n: integer
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	int i;
	int j;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("98");
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j == 98)
			{
				printf("98");
			}
			else
			{
				printf("%d, ", j);
			}
		}
	}
	printf("\n");
}
