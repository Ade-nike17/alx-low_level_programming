#include "main.h"

/**
 * _strcmp - function compares two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = s1[i] - s2[i];
	
	i++;
	while (s1[i] != '\0' && (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			return (cmp);
		}

		else if (s1[i] > s2[i])
		{
			return (cmp);
		}
		else
		{
			return (cmp);
		}
	}

	if (s1[i] == '\0' || s2[i] == '\0')
	{
		return (0);
	}
	return (0);
}
