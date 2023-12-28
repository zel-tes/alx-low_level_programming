#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees memory
 * @head: list pointer
 *
 * Return: Always void.
 **/
void free_listint2(listint_t **head)
{
	listint_t *node, *nNew_node;

	node = *head;
	while (node != NULL)
	{
		nNew_node = node->next;
		free(node);
		node = nNew_node;
	}
}
