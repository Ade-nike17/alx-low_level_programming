#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - deletes node at a given position
 *
 * @head: pointer to pointer of head of list
 * @index: index of node's data
 *
 * Return: 1 if it succeeded and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int count = 0;

	current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}

