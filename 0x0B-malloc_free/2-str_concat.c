#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - function checks length of string
 *
 * @str: string to be checked
 *
 * Return: ptr to concatenated string
 */

int _strlen(char *str)
{
	int i, length;

	i = 0;
	length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * str_concat - function concat two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2;
	int i, j;
	char *strptr;

	if (s1 == NULL && s2 == NULL)
		return ("");

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	strptr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (strptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		strptr[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		strptr[i++] = s2[j];
	}
	strptr[i] = '\0';

	return (strptr);
}


