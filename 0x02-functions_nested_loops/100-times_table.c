#include "main.h"
void print_table(int, int, int);

/**
 * print_times_table - prints nxn times table
 * @n: integer
 *
 * Return: returns void
 */
void print_times_table(int n)
{
    int i, j, prod;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                prod = i * j;
                print_table(i, j, prod);
            }
            _putchar('\n');
        }
    }
}

/**
 * print_table - prints single times table cell
 * @i: integer
 * @j: integer
 * @prod: integer
 *
 * Return: returns void
 */
void print_table(int i, int j, int prod)
{
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
