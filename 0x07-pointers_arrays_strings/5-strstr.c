#include "main.h"

/**
 * _strstr - finds occurence of substring in a string
 * @haystack: target string
 * @needle: substring
 *
 * Return: returns pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0; /* looping through haystack */
	int cnt_ndl = 0; /* looping through needle */
	int full_ndl = 0;
	int start_ind = -1;

	if (haystack == NULL || needle == NULL)
		return (0);

	while (haystack[count] != '\0')
	{
		while (needle[cnt_ndl] != '\0')
		{
			/* printf("\nCurrently at needle[%d]\n", cnt_ndl); */
			if (haystack[count] == needle[cnt_ndl])
			{
				full_ndl++;
				if (haystack[count + 1] == needle[cnt_ndl + 1])
				{
					if (start_ind < 0)
						start_ind = count;
				}
				else
				{
					full_ndl = 0;
					start_ind = -1;
				}
			}
			cnt_ndl++;
			if (cnt_ndl > 0 && cnt_ndl == full_ndl)
				return (&(haystack[start_ind]));
		}
		count++;
		cnt_ndl = 0;
	}
	return (0);
}
