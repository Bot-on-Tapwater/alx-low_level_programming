#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be formatted
 * Return: returns the formatted string
 */
char *cap_string(char *str)
{
	int count = 0;
	int i;
	int sep_count = 0;

	while (str[count] != '\0')
	{
		/* printf("\n*Current char is \'%c\'*\n", str[count]); */
		count++;
	}
	/* printf("\n*%s has %d chars*\n", str, count); */

	for (i = 0; i < count; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' ||
			str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
			sep_count = 0;
		else
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && sep_count == 0)
			{
				/* printf("\n*char is %c*\n", str[i]); */
				str[i] -= 32;
				sep_count++;
			}
			else
			{
				sep_count++;
			}
		}
	}
	return (str);
}
