#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - finds the no of elements in list_t list
 *
 * @h: head pointer to list
 *
 * Return: no of elements in list
 */


size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("nil elements");

		current = current->next;
		count++;
	}
	return (count);
}
