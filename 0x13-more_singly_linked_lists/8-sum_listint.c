#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 * @head: head reference
 *
 * Return: new node
 **/
int sum_listint(listint_t *head)
{
	listint_t *new_node;
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		new_node = head;
		sum = sum + new_node->n;
		head = head->next;
	}
	return (sum);
}
