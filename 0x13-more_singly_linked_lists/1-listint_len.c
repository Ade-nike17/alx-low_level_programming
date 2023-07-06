#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * listint_len - checks the no of elems of listint_t list
 *
 * @h: pointer to head of list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t n = 0;

	current = h;
	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}
