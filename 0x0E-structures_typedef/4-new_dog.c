#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: string var holding new name value
 * @age: float var holding new age value
 * @owner: string var holding new owner value
 *
 * Return: returns pointer to a struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	(*newDog).name = strdup(name);
	(*newDog).age = age;
	(*newDog).owner = strdup(owner);

	if ((*newDog).name == NULL || (*newDog).owner == NULL)
	{
		free((*newDog).name);
		free((*newDog).owner);
		free(newDog);
		return (NULL);
	}
	return (newDog);
}

