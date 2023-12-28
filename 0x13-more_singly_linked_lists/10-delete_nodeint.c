#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: head reference
 * @index: string to add
 *
 * Return: integer
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new_node, *nNew_node;

	if (*head == NULL && index == 0)
		return (-1);
	new_node = *head;
	nNew_node = NULL;
	i = 0;
	while (new_node != NULL && i < index)
	{
		nNew_node = new_node;
		new_node = new_node->next;
		i++;
	}
	if (new_node == NULL)
		return (-1);
	if (nNew_node == NULL)
		*head = new_node->next;
	else
	{
		nNew_node->next = new_node->next;
		free(new_node);
	}
	return (1);
}
