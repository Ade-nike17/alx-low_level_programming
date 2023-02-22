#include <stdio.h>

/**
 * main - prints the sum of even fibonacci number
 * less than 4000000
 *
 * Return: void
 */

int main(void)
{
	int i = 0;
	long b = 1, c = 2, sum = c;

	while (c + b < 4000000)
	{
		c += b;

		if (c % 2 == 0)
			sum += c;

		c = b - c;

		++i;
	}
	printf("%ld\n", sum);
	return (0);
}

