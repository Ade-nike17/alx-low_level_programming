#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function adds new node to end of list_t list
 *
 * @head: pointer to the ointer of head of list
 * @str: string to be duplicated and stored in new node
 *
 * Return: new node and NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str == NULL)
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
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);

}
