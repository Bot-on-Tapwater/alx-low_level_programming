#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power y
 * @x: integer to be raised
 * @y: power we are raising x to
 *
 * Return: returns value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
