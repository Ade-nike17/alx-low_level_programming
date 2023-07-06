#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - function frees listint_t list
 *
 * @head: pointer to the pointer to head of list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);

		head = next;
	}
}
