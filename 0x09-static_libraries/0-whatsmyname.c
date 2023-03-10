#include <stdio.h>
/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
