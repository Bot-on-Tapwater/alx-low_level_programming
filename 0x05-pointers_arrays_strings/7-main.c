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

    str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    puts_half(str);
    return (0);
}
