#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: the destination string
 * @src: our source string
 * @n: point of terminaton for src
 *
 * Return: returns the combined string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0; /* Counts number of char in *dest */
	int i; /* integer to be used in our for loop expressions */
	int ind_src = 0; /* tracks which index we are on src starting from index 0 */

	while (src[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < count)
		{
			dest[i] = src[ind_src];
			ind_src++; /* move to subsequent index */
		}
		else
		{
			dest[i] = '\0';
			ind_src++;
		}
	}
	return (dest);
}
