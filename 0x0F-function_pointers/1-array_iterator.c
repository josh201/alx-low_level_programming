#include <stdlib.h>

/**
  * array_iterator - a function that executes  a function given
  * as a parameter on each element of an array.
  * @array: A pointer to an array
  * @size: Array size
  * @action: is a pointer to the function you need to use
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
