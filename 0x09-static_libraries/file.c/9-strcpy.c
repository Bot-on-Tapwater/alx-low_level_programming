#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: destination string
 * @src: source string
 *
 * Return: returns the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (1)
	{
		if (src[i])
		{
			i++;
		}
		else if (!src[i])
		{
			break;
		}
	}
	/* printf("\n\nsrc has %d charachters\n\n", i); */

	for (j = 0; j < i; j++)
	{
		/* printf("\nAddress for src[%d] is %p\n", j, &(src[j])); */
		dest[j] = src[j];
		/* printf("\nAddress for dest[%d] is %p\n", j, &(dest[j])); */
	}
	dest[i] = '\0';
	return (dest);
}
