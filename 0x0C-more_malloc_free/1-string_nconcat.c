#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of character to be copied from string 2
 * Return: ptr to newly allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t str1, str2;


	str1 = strlen(s1);
	str2 = strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return ('\0');

	if (n >= str2)
		n = str2;

	ptr = malloc(sizeof(char) * str1 + n + 1);
	if (ptr == NULL)
		return (NULL);

	memcpy(ptr, s1, str1);
	memcpy(ptr + str1, s2, ncopy);
	ptr[str1 + n + 1] = '\0';

	return (ptr);
}
