#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @old_size: size of original block of memory
 * @new_size: size of new block of memory
 * @ptr: ptr to the original block of memory
 *
 * Return: ptr to new ptr of new blockk of memory
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}

	return (new_ptr);
}
