#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char k;

	while (1)
	{
		if (s[i])
		{
			i++;
		}
		else if (!s[i])
		{
			break;
		}
	}
	for (j = 0; j < i; j++)
	{
		i--;
		k = s[j];
		s[j] = s[i];
		s[i] = k;
	}
}
