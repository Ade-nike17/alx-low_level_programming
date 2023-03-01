#include "main.h"

/**
 * _strcat - function concatenates two strings
 *
 * @dest: string 1
 * @src: string 2 to be added to string 1
 *
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/**
	 * iterate over dest string to
	 * move pointer to the end of string
	 */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* copy dest string to dest string */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* adds a terminating null byte to dest string */
	*ptr = '\0';

	return (dest);

}
