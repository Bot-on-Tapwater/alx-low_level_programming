#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes we are searching against
 *
 * Return: returns null or pointer to matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int count_acc = 0;

	while (s[count] != '\0')
	{
		while (accept[count_acc] != '\0')
		{
			if (s[count] == accept[count_acc])
			{
				return (&(s[count]));
			}
			count_acc++;
		}
		count++;
		count_acc = 0;
	}
	return (0);
}
