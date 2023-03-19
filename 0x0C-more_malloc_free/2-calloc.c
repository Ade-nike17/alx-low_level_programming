#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function allocates memory to an array
 *
 * @nmemb: number of elements of array
 * @size: number of byte size of element
 *
 * Return: ptr to allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
