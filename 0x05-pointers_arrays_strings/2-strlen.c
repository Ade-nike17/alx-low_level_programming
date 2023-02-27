#include "main.h"

/**
 * _strlen - function returns the length of a string
 *
 * @s: string to be counted
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}

	return (l);
}
