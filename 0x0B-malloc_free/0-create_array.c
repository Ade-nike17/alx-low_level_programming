#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function creates areay of chars
 *
 * @size: size of array
 * @c: chars in array
 *
 * Return: ptr to array
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
