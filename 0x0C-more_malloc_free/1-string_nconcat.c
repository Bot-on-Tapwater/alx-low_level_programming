#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: no. of bytes of second string
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr; /* pointer to concatenated string */
	unsigned int len_s1 = 0; /* length of s1 */
	unsigned int len_s2 = 0; /* lenght of s2 */
	unsigned int i, j, k;

	/* if s1 / s2 is NULL == empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0') /* string length s1 */
		len_s1++;

	while (s2[len_s2] != '\0') /* string lenght s2 */
		len_s2++;

	if (n >= len_s2)
		n = len_s2;
	ptr = malloc(sizeof(*ptr) * (len_s1 + n + 1));

	if (ptr == NULL) /* return NULL when malloc fails */
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i]; /* assigning s1 chars to ptr */

	for (j = len_s1, k = 0; j < (len_s1 + n) && s2[k] != '\0'; j++, k++)
	{
		ptr[j] = s2[k]; /* assigning s2 chars to ptr */
	}
	ptr[len_s1 + n] = '\0'; /* assignging null terminator */

	return (ptr); /* return pointer to s1 + s2 */
}
