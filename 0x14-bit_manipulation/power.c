#include <stdio.h>

unsigned int power (unsigned int x, unsigned int y)
{
	unsigned int base = x;
	if (y == 1)
	{
		x = x;
	}
	else if (y == 0)
	{
		x = 1;
	}
	for (base = x;y != 1; y--)
	{
		x = base * x;
	}
	printf("Result is %u\n", x);
	return (x);
}

int main(void)
{
	power(2, 4);
	return (0);
}