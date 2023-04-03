#include "lists.h"

/**
 * listint_len - function prints the number of elements in list_t
 *
 * @h: pointer to the head of the first node in list_t
 *
 * Return: number of elements
 */


size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
