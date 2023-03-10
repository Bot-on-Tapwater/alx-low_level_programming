#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_valid_integer - checks whether a string is a valid integer
 * @str: string to be checked
 *
 * Return: returns either true or false
 */
bool is_valid_integer(char *str)
{
if (*str == '\0')
{
/* // Empty string is not a valid integer */
return (false);
}

if (*str == '-' || *str == '+')
{
/* // Skip leading sign if present */
str++;
}

while (*str != '\0')
{
if (!isdigit(*str))
{
/* // Non-digit character found */
return (false);
}
str++;
}

return (true);
}
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: either 0 or 1
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;

for (i = 1; i < argc; i++)
{
if (is_valid_integer(argv[i]) == true)
{
sum += atoi(argv[i]);
}
else if (is_valid_integer(argv[i]) == false)
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
