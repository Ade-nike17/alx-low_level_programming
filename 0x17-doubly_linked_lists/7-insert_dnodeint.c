#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 *
 * @h: pointer to pointer to head of list
 * @idx: index of node's data
 * @n: data of the node
 *
 * Return: addr of new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	current = *h;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}
