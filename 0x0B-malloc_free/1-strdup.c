#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function copies string
 *
 * @str: string to be copied
 *
 * Return: ptr to copied string
 */


char *_strdup(char *str)
{
	char *ptr;
	int str_len;

	if (str == NULL)
		return (NULL);

	str_len = strlen(str);
	ptr = malloc(sizeof(char) * str_len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);
	free(ptr);
}


