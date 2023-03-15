#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - function concatenate all the argument of your program
 *
 * @ac: number of args
 * @av: length of strings
 *
 * Return: strings
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *ptr = NULL;
	size_t total_length = 0;
	size_t res = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 2;
	}

	ptr = (char *) malloc(sizeof(char) * total_length);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(ptr + res, av[i]);
		res += strlen(av[i]);
		ptr[res++] = '\n';
	}

	return (ptr);
}



