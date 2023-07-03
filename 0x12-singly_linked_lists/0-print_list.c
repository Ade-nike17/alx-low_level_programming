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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%lu] (nil)\n", n);

		else
			printf("[%lu] %s\n", n, h->str);

		h = h->next;
		n++;
	}

	return (n);

}
