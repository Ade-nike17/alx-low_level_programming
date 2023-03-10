#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no of args passed into it
 *
 * @argc: argument count
 * @argv: argumenti vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv != 0)
		printf("%d\n", argc - 1);


	return (0);
}
