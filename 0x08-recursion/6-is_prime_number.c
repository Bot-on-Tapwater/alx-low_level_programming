#include "main.h"
int check_prime(int n, int d);
/**
 * is_prime_number - checks if input integer is a prime number
 * @n: integer to be checked
 *
 * Return: returns either 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(n, 3));
}
/**
 * check_prime - checks for prime numbers
 * @n: integer
 * @d: integer
 *
 * Return: returns either 1 or 0
 */
int check_prime(int n, int d)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (d * d > n)
	{
		return (1);
	}
	else if (n % d == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, d + 1));
	}
}
