#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 *insert_nodeint_at_index - inserts new node at a givenposition
 *
 * @head: pointer to pointer of head of list
 * @idx: index of node's data
 * @n: the data of the node
 *
 * Return: addr of new node or NULL if it fails
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL || current->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		current->next = new_node;
	}
	return (new_node);
}
