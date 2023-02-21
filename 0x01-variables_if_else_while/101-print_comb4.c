#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, n, r;

	for (i = 0; i < 10; i++)
	{
		for (n = i + 1; n < 10; n++)
		{
			for (r = n + 1; r < 10; r++)
			{
				putchar(i + '0');
				putchar(n + '0');
				putchar(r + '0');
				if (i != 7 || n != 8 || r != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
