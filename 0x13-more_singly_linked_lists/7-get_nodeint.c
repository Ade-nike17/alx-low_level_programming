#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 *get_nodeint_at_index - gets the nth node of listint_t list
 *
 * @head: pointer to head of list
 * @index: index of node's data
 *
 * Return: nth node of listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
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
