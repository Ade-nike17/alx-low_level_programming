#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 * @str: string to be capitalized
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i;

	/* capitalize the first letter of string */

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	/* capitalize every character after a whitespace or punctuation */

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' || str[i - 1] == '\n'
		|| str[i - 1] == ',' || str[i - 1] == ';' ||
		str[i - 1] == '.' || str[i - 1] == '!' || str
		[i - 1] == '?' || str[i - 1] == '"' || str[i -
		1] == '(' || str[i - 1] == ')' || str[i - 1] ==
		'{' || str[i - 1] == '}' || str[i - 1] == '\t')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
