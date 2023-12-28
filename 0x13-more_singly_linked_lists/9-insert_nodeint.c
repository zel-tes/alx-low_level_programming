#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: head reference
 * @idx: string to add
 * @n: integer
 *
 * Return: new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *nN_node;
	unsigned int i;

	if (*head == NULL && idx > 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node = *head;
		return (new_node);
	}
	nN_node = *head;
	for (i = 0; i < idx && nN_node != NULL; i++)
	{
		nN_node = nN_node->next;
	}
	new_node->next = nN_node->next;
	nN_node->next = new_node;
	return (*head);
}
