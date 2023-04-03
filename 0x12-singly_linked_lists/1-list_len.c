#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - function lists length of elements
 *
 * @h: pointer to the head of list
 *
 * Return: length of list
 */

size_t list_len(const list_t *h)
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
			h = h->next;
			len++;
		}
	}
	return (len);
}
