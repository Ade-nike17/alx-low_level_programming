#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function concats all args to strings
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: ptr to new string
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int length = 0;
	int i, j, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += strlen(av[i]);
	length += ac;

	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[index] = av[i][j];
			index++;
		}
		if (i != ac - 1)
		{
			concat[index] = '\n';
			index++;
		}
	}
	concat[index] = '\n';
	return (concat);
}
