#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function adds new node at the beginning of list_t list
 *
 * @head: pointer tot he head of the head of the list
 * @str: string to bbe duplicated and added as new_node's value
 *
 * Return: new  node and null if empty
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head || !str)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
