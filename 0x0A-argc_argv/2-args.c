#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns arguments
 *
 * @argc: argument cout
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

