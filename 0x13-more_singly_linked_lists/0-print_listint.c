#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function prints integers of list list_t
 *
 * @h: pointer to the head of the list
 * Return: number of integers printed
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	return (count);
}
