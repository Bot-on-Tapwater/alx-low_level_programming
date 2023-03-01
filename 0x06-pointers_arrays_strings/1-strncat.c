#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: our source string
 * @n: point of terminaton for src
 *
 * Return: returns the combined string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0; /* Counts number of char in *dest */
	int count_src = 0; /* Counts number of char in *src */
	int i; /* integer to be used in our for loop expressions */
	int ind_src = 0; /* tracks which index we are on src starting from index 0 */

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count_src] != '\0')
	{
		count_src++;
	}
	if (n < count_src)
	{
		for (i = count; i < (count + n); i++)
		{
			dest[i] = src[ind_src];
			ind_src++;
		}
	}
	else
	{
	for (i = count; i < (count + count_src); i++)
	{
		if (i == (count + count_src))
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[ind_src];
			ind_src++; /* move to subsequent index */
		}
	}
	}
	return (dest);
}
