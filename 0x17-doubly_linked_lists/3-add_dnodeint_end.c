#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of dlistint_t list
 *
 * @head: pointer to pointer of head of list
 * @n: data to be added to list
 *
 * Return: addr of new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	current = *head;
	if (current == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}
