#include "main.h"
#include <stdio.h>

/**
 * rev_string - function reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int b, c, temp;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		c++;
	}

	c--;

	while (c > b)
	{
		temp = s[c];
		s[c--] = s[b];
		s[b++] = temp;
	}
}
