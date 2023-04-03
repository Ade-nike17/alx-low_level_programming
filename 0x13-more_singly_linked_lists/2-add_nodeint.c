#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function adds node to the head of listint_t list
 *
 * @head: pointer to the pointer to the head of the listint_t
 * @n: int to be stored in new node
 *
 * Return: address of the new element or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
