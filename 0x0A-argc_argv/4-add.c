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

	i = 1, sum = 0;

	while (argv[i] != NULL)
	{
		j = 1;
		while (*argv[i] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
