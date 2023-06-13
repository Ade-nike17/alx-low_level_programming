#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
		i++;
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
