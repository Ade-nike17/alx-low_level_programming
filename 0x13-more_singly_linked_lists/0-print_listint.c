#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_listint - prints all the elems of listint_t list
 *
 * @h: pointer to head of list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *current;

	current = h;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	return (n);
}
