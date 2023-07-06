#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint_end - adds new node at the end of list
 *
 * @head: pointer to the pointer to head of list
 * @n: number of elements of listint_t list
 *
 * Return: addr of new elements or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
