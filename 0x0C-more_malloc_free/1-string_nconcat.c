#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: length of 2nd string to be concatenated
 *
 * Return: ptr to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strptr;
	unsigned int len1, len2;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0, len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	strptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (strptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		strptr[i] = s1[i];

	for (j = 0; j < n; j++)
		strptr[i++] = s2[j];

	strptr[i] = '\0';
	return (strptr);
}
