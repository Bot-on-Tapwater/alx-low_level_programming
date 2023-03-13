#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-D array of integers
 * @width: width of 2-D array
 * @height: height of 2-D array
 *
 * Return: either 0 or pointer to 2-D array
 */
int **alloc_grid(int width, int height)
{
int **array; /* holds 2-D array of integers */
int i, j; /* variables for "for" loops */

if (width < 1 || height < 1)
{
/* if width or height is less than 1 return NULL */
return (NULL);
}

array = malloc(height * sizeof(int *)); /* initialise rows */
if (array == NULL)
{
/* if malloc fails return NULL */
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int)); /* initialise columns */
if (array[i] == NULL)
{
for (j = 0; j < i; j++)
free(array[j]);
free(array);
return (NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
{
array[i][j] = 0; /* initializing to 0 */
}

/* return pointer to 2-D array */
return (array);
/* code source */
/* https://www.geeksforgeeks.org/dynamically-allocate-2d-array-c/ */
}

