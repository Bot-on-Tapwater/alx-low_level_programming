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
	for (; *haystack != '\0'; haystack++) /* for loop to loop over xters in the string haystack 
											we stop the loop once we get to the null terminator ('\0')
											first expression missing since we don't need to initialize variable haystack
											cause haystack is a parameter hence already initialized*/
	{
		char *l = haystack; /* The pointer l points to the  base address of haystack, if base address of haystack moves by by one on the subsequent iteration of the for loop the */
		printf("\nhaystack is base address of string haystack: %p, which is equal to address of first character i.e haystack[0]:%p\n", haystack, &(haystack[0]));
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
