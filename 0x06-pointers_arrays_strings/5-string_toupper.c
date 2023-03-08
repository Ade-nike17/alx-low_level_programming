#include "main.h"

/**
 * string_toupper - changes all lowercase of a string
 * to uppercase
 *
 * @str: string to convert
 *
 * Return: a pointer to the resulting string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
