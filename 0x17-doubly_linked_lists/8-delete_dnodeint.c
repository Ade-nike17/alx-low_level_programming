#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: pointer to pointer tk head of list
 * @index: position of node to be deleted
 *
 * Return: 1 if it succeeds and -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	current = *head;
	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current->next != NULL)
		current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (1);
}
