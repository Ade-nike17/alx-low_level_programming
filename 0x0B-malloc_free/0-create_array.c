#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of array to be printed out
 * @c: characters in array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *mem = NULL;
	size_t i;

	mem = (char *)malloc(size * sizeof(char));

	if (mem == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < (size * sizeof(char)); i++)
	{
		mem[i] = c;
	}
	return (mem);

}
