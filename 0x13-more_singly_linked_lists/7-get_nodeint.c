#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: head reference
 * @index: string to add
 *
 * Return: new node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node, *nN_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL && i < index - 1; i++)
	{
		new_node = head;
		head = head->next;
		if (i == index - 1)
		{
			nN_node = new_node;
			head = nN_node;
		}
	}
	return (head);
}
