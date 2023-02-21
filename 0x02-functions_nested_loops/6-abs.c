#include "main.h"

/**
 * _abs - gives absolute value of an integer
 * @i: integer
 *
 * Return: returns absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
