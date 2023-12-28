#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 * @head: head reference
 *
 * Return: integer
 **/
int pop_listint(listint_t **head)
{
	listint_t *new_node;

	if (*head == NULL)
		return (0);
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (new_node->n);
}
