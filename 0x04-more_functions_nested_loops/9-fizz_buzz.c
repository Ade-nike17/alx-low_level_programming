#include <stdio.h>

/**
 * fizzbuzz - function prints to 100 except
 * multiples of 3 and 5
 *
 * @i: numbers printed to 100
 *
 * Return: void
 */
void fizzbuzz(int i);

void fizzbuzz(int i)
{

	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i = 100;

	fizzbuzz(i);
	return (0);
}
