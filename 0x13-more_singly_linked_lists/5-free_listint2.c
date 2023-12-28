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
	listint_t *new_node;

	while (*head != NULL)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
	}
}
