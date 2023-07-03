#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - functn prints all elems of list_t list
 *
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%lu] (nil)\n", n);

		else
			printf("[%u] %s\n", current->len, current->str);

		current = current->next;
		n++;
	}

	return (n);

}
