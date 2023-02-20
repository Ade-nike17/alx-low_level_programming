#include <stdio.h>

/**
 * main - Entry point
 *
 * return - Always 0 (success)
 */

int main (void)
{
	char c;
	/* prints lowercase */
	{
	for (c = 'a'; c <= 'z' ; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	}
	return (0);
}
