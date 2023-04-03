#include <stdio.h>
#include "lists.h"

/**
 * print_list - function prints all the elements of a list list_t
 *
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}
