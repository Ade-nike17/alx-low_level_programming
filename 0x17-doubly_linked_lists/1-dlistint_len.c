#include "lists.h"

/**
 * dlistint_len - returns the no of elements in a dlistint_t list
 *
 * @h: pointer to head of list
 * Return: no of elements
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
