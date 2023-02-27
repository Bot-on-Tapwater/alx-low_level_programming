#include "main.h"
#include "_putchar.c"
#include <stdio.h>
#include "7-puts_half.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
