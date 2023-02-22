#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - entry point
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be seperated by coma and space
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int fib1 = 0, bk1 = 1, fib2 = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fib2 > 0 || fib1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fib1 + fib2 + hold1;
			fib1 = fib2, fib2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", fib2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
