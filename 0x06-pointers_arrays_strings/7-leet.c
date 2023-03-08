#include "main.h"

/**
 * leet - function encodes strings
 *
 * @str: Array of string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char *ptr = str;
	char leet_code[5] = {'4', '3', '0', '7', '1'};
	char letters[5] = {'a', 'e', 'o', 't', 'l'};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				*ptr = leet_code[j];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
