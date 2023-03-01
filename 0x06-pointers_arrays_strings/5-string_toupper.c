#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be formatted
 * Return: returns the formatted string
 */
char *string_toupper(char *str)
{
	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}
	/* printf("\n*%s has %d chars*\n", str, count); */

	for (i = 0; i < count; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* printf("\n*char is %c*\n", str[i]); */
			str[i] -= 32;
		}
	}
	return (str);
}
