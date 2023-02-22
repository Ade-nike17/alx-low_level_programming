#include <stdio.h>

/**
 * main - function prints the first 59 fibonacci numbers 
 * starting with 1 and 2
 *
 * Return: Always 0 (succss)
 */

int main(void)
{
	long a = 0;
	long b = 1;
	int n = 0;
	long fibn;

	while (n < 50)
	{
		fibn = a + b;
		if (n != 49)
		{
			printf("%ld, ", fibn);
		}
		else 
		{
			printf("%ld\n", fibn);
		}
		a = b;
		b = fibn;
		n += 1;
	}
	return (0);


}
