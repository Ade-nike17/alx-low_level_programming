#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - function deletes node at index of a listint_t list
 *
 * @head: pointer to the pointer of head node
 * @index: position of node to be deleted
 *
 * Return: 1 if it succeeds and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (!head || !*head)
	{
		return (-1);
	}

	current = *head;
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}
	if (i < index || current == NULL)
	{
		return (-1);
	}
	if (prev == NULL)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
	}

	free(current);
	return (1);

}
