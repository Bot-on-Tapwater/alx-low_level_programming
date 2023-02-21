#include "main.h"

/**
 * times_table - prints 9x9 timetable
 *
 * Return: returns void
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			if (!(prod == 0 || prod < 10))
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if ((i * (j + 1)) < 10)
				{
					_putchar(prod + '0');
					if (j < 9)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(prod + '0');
					if (j < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
