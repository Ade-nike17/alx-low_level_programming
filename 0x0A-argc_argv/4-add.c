#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int i, j;
	int sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
