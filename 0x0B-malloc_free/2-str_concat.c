#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: terminating string
 *
 * Return: either NULL or pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat_str; /* Holds s1 + s2 */
	int i, j; /* Variables for "for" loops */
	int len_s1 = 0; /* Length of s1 */
	int len_s2 = 0; /* length of s2 */

	if (s1 == NULL) /* if s1 = NULL, s1 = empty string */
		s1 = "";
	if (s2 == NULL) /* if s2 = NULL, s2 = empty string */
		s2 = "";

	while (s1[len_s1] != '\0') /* Get length of s1 */
		len_s1++;

	while (s2[len_s2] != '\0') /* get length of s2 */
		len_s2++;

	/* (... + 1) takes care of null terminator */
	cat_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (cat_str == 0)
		/* return null if malloc fails */
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
	{
		/* printf("\n*s1[%d] to cat_str[%d]*\n", i, i); */
		cat_str[i] = s1[i]; /* Copy values of s1 to cat_str */
	}

	for (i = len_s1, j = 0; s2[j] != '\0'; i++, j++)
	{
		/* printf("\n*s2[%d] to cat_str[%d]*\n", j, i); */
		cat_str[i] = s2[j]; /* copy values of s2 to cat_str */
	}

	cat_str[len_s1 + len_s2] = '\0';

	/* return pointer to s1 + s2 */
	return (cat_str);
}
