#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 *sum_listint - function adds the data(n) of listint_t list
 *
 * @head: pointer to head of list
 *
 * Return: sum of data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *current;

	current = head;
	if (current == NULL)
		return (result);

	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}

