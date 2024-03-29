#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds occurence of substring in a string
 * @haystack: target string
 * @needle: substring
 *
 * Return: returns pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
