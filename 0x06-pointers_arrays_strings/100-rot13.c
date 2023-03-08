#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 *
 * @str: string to be encoded
 *
 * Return: a pointer to the encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = 'A';
		}
		else
		{
			continue;
		}

		j = (str[i] - c + 13) % 26;

		str[i] = j + c;
	}
	return (str);
}

