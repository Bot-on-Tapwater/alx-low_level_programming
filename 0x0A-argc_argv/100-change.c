#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: argv
 * @argc: argc
 *
 * Return: either 1 or 0
 */
int main(int argc, char **argv)
{
	int cents, quarters, dimes, nickels, twos, ones;

	/* check for the correct number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Parse the amount of cents */
	cents = atoi(argv[1]);

	/* Chekc for negative input */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* Calculate the minimum number of coins */
	quarters = cents / 25;
	cents -= quarters * 25;

	dimes = cents / 10;
	cents -= dimes * 10;

	nickels = cents / 5;
	cents -= nickels * 5;

	twos = cents / 2;
	cents -= twos * 2;

	ones = cents;

	/* Print the result */
	printf("%d\n", quarters + dimes + nickels + twos + ones);
	return (0);
}
