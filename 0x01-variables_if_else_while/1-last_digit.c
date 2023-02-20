#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_dgt = n % 10;
	/* your code goes there */

	{
	if (last_dgt > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, last_dgt);
	}

	if (last_dgt == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, last_dgt);
	}

	if (last_dgt < 6 && last_dgt != 0)
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, last_dgt);
	}

	}
	return (0);
}
