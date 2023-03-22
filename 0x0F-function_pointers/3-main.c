#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry pont
 * @argc: argc
 * @argv: argv
 *
 * Return: result of operation
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 &&
	strcmp(argv[2], "-") != 0 &&
	strcmp(argv[2], "*") != 0 &&
	strcmp(argv[2], "/") != 0 &&
	strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0
	|| strcmp(argv[2], "%") == 0)
	&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (result);
}
