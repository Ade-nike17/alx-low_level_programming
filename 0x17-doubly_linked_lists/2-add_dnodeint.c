#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of dlistint_t list
 *
 * @head: pointer to pointer to head of list
 * @n: data to add to list
 *
 * Return: addr of new element or NULLif it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
