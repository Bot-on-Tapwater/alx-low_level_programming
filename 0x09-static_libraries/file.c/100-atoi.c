#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0; /* an integer to help us iterate in our loop from 0 to len*/
	d = 0; /* checks signage */
	n = 0; /* value of our integer which we keep modifiying char by char, also keeps tracks of the powers of 10, 10th, 100th, 1000th */
	len = 0; /* length of our string */
	f = 0;
	digit = 0;

	while (s[len] != '\0') /* while loop to determine length of our string */
		len++; 

	while (i < len && f == 0)
	{
		printf("\n\n*Value of i is %d*\n\n", i);
		printf("\n\n*Value of f is %d*\n\n", f);

		if (s[i] == '-')
		{
			printf("\n\n*Value of s[i] is %c*\n\n", s[i]);
			++d;
			printf("\n\n*Value of d incremented by 1, d is now %d*\n\n", d);
		}
		if (s[i] >= '0' && s[i] <= '9')
		{	
			printf("\n\n*Value of s[i] is %c*\n\n", s[i]);
			digit = s[i] - '0'; /* the digit at this point is being refered to by it's ascii number (48 - 57), subtracting '0' gives us the actual integer, for example, 9 will be represented as 57, and '0' is 48, thus 57 - 48 will result in the decimal 9 */
			printf("\n\n*digit is (s[i] - '0') = %d*\n\n", digit);
			if (d % 2)
			{
				printf("\n\n*Value of d is %d*\n\n", d);
				digit = -digit;
				printf("\n\n*Signage of digit is changed, value of digit is %d*\n\n", digit);
			}
			n = n * 10 + digit;
			printf("\n\n*Value of n is (n * 10 + digit) = %d*\n\n", n);
			f = 1;
			printf("\n\n*Value of f is set to %d*\n\n", f);
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{	
				printf("\n\n*If next character (s[%d]is not an integer (not a sign - +), break out of the while loop *\n\n", s[i + 1]);
				break;
			}
			f = 0;
			printf("\n\n*Value of f is set to %d*\n\n", f);
		}
		i++;
		printf("\n\n*Value of i incremented by 1, i is now %d*\n\n", i);
	}

	if (f == 0)
	{	
		printf("\n\n*If there are no numbers in the string and f == %d*\n\n", f);
		return (0);
	}
	printf("\n\n*The integer in string %s is %d*\n\n", s, n);
	return (n);
}
