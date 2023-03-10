#include <stdio.h>
#include <stdlib.h>


int is_digit(const char *s);

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 for success and otherwise for failure
 */

int main(int argc, char *argv[])
{
	int input, i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		input = atoi(argv[i]);

		if (!is_digit(input))
		{
			printf("Error\n");
			return (1);
		}
		sum += input;

	}
	printf("%d\n", sum); 
	
	return (0);
}


int is_digit(int num)
{
    return (num >= '0' && num <= '9');
}




