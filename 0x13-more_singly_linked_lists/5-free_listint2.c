#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_listint2 - function frees listint_t list
 *
 * @head: pointer to the pointer to head of list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);

		current = next;
	}
	*head = NULL;
}
