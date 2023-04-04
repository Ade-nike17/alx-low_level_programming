#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function deletes the head node of listint_t list
 *
 * @head: pointer to the pointer of head of listint_t
 * Return: data(n) of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *delete;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	delete = *head;
	data = delete->n;
	*head = (*head)->next;
	free(delete);

	return (data);
}
