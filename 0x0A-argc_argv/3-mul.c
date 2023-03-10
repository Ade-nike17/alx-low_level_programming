#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);
		return (1);
	}

	printf("%d\n", product);

	return (0);
}

