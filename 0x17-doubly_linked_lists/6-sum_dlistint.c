#include "lists.h"

/**
 * sum_dlistint - sums all data of dlistint_t list
 *
 * @head: pointer to head of list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int result = 0;

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
