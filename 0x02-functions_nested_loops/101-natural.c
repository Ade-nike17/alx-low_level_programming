#include <stdio.h>


/**
 * main - entry point, function computes and prints the sum
 *
 * of all the multiples of 3 or 5 below 1024
 *
 * Return: int
 */

int main(void)
{
	int mul = 0;
	int sum = 0;

	while (mul < 1024)
	{
		if (mul % 3 == 0 || mul % 5 ==  0)
		{
			sum += mul;
		}
		mul += 1;
	}
	printf("%d\n", sum);
	return (0);
}
