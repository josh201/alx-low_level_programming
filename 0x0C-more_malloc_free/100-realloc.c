#include <stdlib.h>
#include "main.h"

/**
  * _realloc - a function that reallocates a memory block using malloc and free
  * @ptr: pointer to the previous allocated
  * @old_size: old size of memory allocated in bytes
  * @new_size: new size of memory allocated in bytes
  * Return: void pointer to nee memory location
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_location, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_location = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_location[i] = new_ptr[i];
	free(ptr);
	return (new_location);
}
