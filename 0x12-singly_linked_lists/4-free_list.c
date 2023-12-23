#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees memory
 * @head: list pointer
 *
 * Return: Always void.
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		free(node->str);
		head = head->next;
		free(node);
	}
}
