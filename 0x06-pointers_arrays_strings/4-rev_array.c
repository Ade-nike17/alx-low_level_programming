#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of element to be swapped
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;
	
	/* check if i is at the end of string */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
