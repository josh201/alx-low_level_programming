#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array
 * @min: input integer
 * @max: input integer
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *new_array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	new_array = malloc(size * (sizeof(int)));
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = min++;

	return (new_array);
}
