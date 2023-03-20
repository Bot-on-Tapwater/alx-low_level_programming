#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: stuct to be printed
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
	/* printf("Age: %s\n", (*d).age == 0 ? "(nil)" : "%f", (*d).age); */
	if ((*d).age == 0)
	{
		printf("Age: %s\n", "(nil)");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}
	printf("Owner: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner);
}
