#include "main.h"
/**
 * _strcmp - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns the difference between string 1 and 2
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0; /* Counts number of char in s1 */
	int count_src = 0; /* Counts number of char in s2 */
	int i; /* integer to be used in our for loop expressions */
	int ind_chk; /* checks which has more chars between s1 and s2 */
	int diff = 0; /* checks the integer difference between s1 and s2 chars */

	while (s1[count] != '\0')
	{
		/* printf("\n***%c equal to %d ascii***\n", s1[count], s1[count]); */
		count++;
	}
	/* printf("\n***dest has %d chars***\n", count); */
	while (s2[count_src] != '\0')
	{
		/* printf("\n***%c***\n", src[count_src]); */
		count_src++;
	}

	if (count <= count_src)
		ind_chk = count_src;
	else
		ind_chk = count;
	for (i = 0; i < ind_chk; i++)
	{
		if (diff == 0)
			diff += (s1[i] - s2[i]);
		else
			break;
	}

	return (diff);
}

