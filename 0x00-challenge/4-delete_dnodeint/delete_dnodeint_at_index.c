#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c_node = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		if (!c_node->next)
		{
			*head = c_node->next;
			free(c_node);
			return (1);
		}
		c_node->next->prev = c_node->prev;
		*head = c_node->next;
		free(c_node);
		return (1);
	}

	for (i = 0; c_node; i++, c_node = c_node->next)
	{
		if (i == index)
		{
			c_node->prev->next = c_node->next;
			if (c_node->next)
				c_node->next->prev = c_node->prev;
			free(c_node);
			return (1);
		}
	}
	return (-1);
}
