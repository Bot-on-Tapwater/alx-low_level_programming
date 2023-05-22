#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: our source string
 *
 * Return: returns the combined string
 */
char *_strcat(char *dest, char *src)
{
	int count = 0; /* Counts number of char in *dest */
	int count_src = 0; /* Counts number of char in *src */
	int i; /* integer to be used in our for loop expressions */
	int ind_src = 0; /* tracks which index we are on src starting from index 0 */

	while (dest[count] != '\0')
	{
		count++;
	}
	/* printf("\n***dest has %d chars***\n", count); */
	while (src[count_src] != '\0')
	{
		/* printf("\n***%c***\n", src[count_src]); */
		count_src++;
	}
	/* printf("\n***src has %d chars***\n", count_src); */
	for (i = count; i < (count + count_src); i++)
	{
		/* Append the chars of src to the end of dest */
		if (i == (count + count_src))
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[ind_src];
			/* printf("\n***Append %c to dest***\n", src[ind_src]); */
			ind_src++; /* move to subsequent index */
		}
	}

	return (dest);
}

