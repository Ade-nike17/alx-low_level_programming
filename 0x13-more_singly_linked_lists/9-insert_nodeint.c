#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 *
 * @head: pointer to the pointer of head node
 * @idx: position where new node should be added (starting at 0)
 * @n: value to be stored in the new node
 *
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	size_t i;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	if (current != NULL)
	{
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
		}
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);

}
