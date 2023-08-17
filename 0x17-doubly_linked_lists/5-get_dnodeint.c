#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 *
 * @head: pointer to head of list
 * @index: position of node to return
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
