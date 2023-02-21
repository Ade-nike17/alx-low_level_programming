#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int n;
	{
	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			if (i != n)
			{
				putchar(i + '0');
				putchar(n + '0');
			
				if (i != 9 || n != 8)
				{
					putchar(',');
					putchar(' ');
				}
			
			}
		}
	}
	putchar('\n');
	}
	return (0);
}
