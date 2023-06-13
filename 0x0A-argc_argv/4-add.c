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
	int i;
	int sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	i = 1;
	sum = 0;

	while (argv[i] != NULL)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
