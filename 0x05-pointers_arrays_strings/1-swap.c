#include "main.h"

/**
 * swap_int - function swaps the values of integers
 *
 * @a: integer to be swapped
 * @b: other integer to be swapped with
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

