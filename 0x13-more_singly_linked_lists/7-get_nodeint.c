#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of listint_t list
 *
 * @head: pointer to the head node of list
 * @index: position of the node
 *
 * Return: nth node of index of linked list
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *current = head;

	if (!current)
	{
		return (NULL);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;

	}
	return (current);
}
