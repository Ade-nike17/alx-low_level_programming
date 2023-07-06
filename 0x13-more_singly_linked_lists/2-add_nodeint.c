#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint - adds new node at the start of list
 *
 * @head: pointer to the pointer to head of list
 * @n: number of elements of listint_t list
 *
 * Return: addr of new elements or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
