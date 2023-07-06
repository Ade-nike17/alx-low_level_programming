#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 *pop_listint - deletes the head node of listint_t list
 *
 * @head: pointer to the pointer to head of list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;
	int count = 0;

	if (head == NULL || *head == NULL)
		return (count);

	current = *head;
	next = current->next;
	count = current->n;
	free(current);

	*head = next;

	return (count);
}
