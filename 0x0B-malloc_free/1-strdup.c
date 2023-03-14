#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function returns a pointer to newly allocated
 * space which contains a copy of the string given as parameter
 *
 * @str: string to be copied
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *mem = NULL;
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
		;

	mem = (char *)malloc(i + 1 * sizeof(char));

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		mem[i] = str[i];
	}

	return (mem);
}

