#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string containing char to be matched
 *
 * Return: returns number of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;		/* looping through s */
	unsigned int count_acc = 0;	/* looping through accept */
	unsigned int len = 0;		/* counting number of matches */
	int zero_match = 0;

	while (s[count] != '\0')	/* keep looping till null */
					/* terminator is reached in s */
	{
		while (accept[count_acc] != '\0')	/* keep looping till null */
							/* terminator is reached */
							/* in accept */
		{
			if (s[count] == accept[count_acc])
			{
				len++;
				zero_match++;
			}
			count_acc++;
		}

		if (zero_match == 0)
			return (len);
		count++;
		count_acc = 0;
		zero_match = 0;
	}
	return (len);
}
