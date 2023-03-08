#include "main.h"
int find_sqrt(int n, int i);
/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: integer n
 *
 * Return: returns the natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
/**
 * find_sqrt - finds natural square root of a number
 * @n: integer n
 * @i: possible natural square root
 *
 * Return: returns the natural square root of n or -1
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}
