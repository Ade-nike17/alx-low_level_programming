#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - entry point of program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 for success
 */


int main(int argc, char *argv[])
{
	char *s;
	int a, b, result;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	func_ptr = get_op_func(s);

	if ((*s == '%' || *s == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = func_ptr(a, b);
	printf("%d\n", result);
	return (0);
}
