#include "main.h"

/**
 * _strncat - function concatenates two strings
 * it will use at most 'n' bytes from src
 *
 * @dest: string 1
 * @src: string 2 to be added to string 1
 * @n: including an integer
 *
 * Return: dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* find the length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* use at most n bytes from src string */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];

	}

	return (dest);

}

