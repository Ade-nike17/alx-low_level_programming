#include "main.h"


/**
 * _strlen_recursion - function returns length of string
 *
 * @s: string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
