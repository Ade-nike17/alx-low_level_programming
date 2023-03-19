#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: variable to be checked
 *
 * Return: ptr to malloc
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if(ptr == NULL)
		exit (98);

	return (ptr);

}
