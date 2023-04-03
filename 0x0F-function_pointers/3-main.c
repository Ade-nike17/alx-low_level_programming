#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] || (argv[2][0] == '/' && argv[3][0] == '0')
			|| (argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(a, b));

	return (0);

}