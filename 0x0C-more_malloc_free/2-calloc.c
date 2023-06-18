#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function allocates memory to an array
 *
 * @nmemb: number of elements in array
 * @size: size of the array
 *
 * Return: ptr to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_ptr;
	char *ptr;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_ptr = malloc(size * nmemb);
	if (mem_ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr = (char *)mem_ptr + (i * size);
		for (j = 0; j < size; j++)
			ptr[j] = 0;
	}
	return (mem_ptr);
}

		

