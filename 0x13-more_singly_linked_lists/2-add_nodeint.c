#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: head reference
 * @n: string to add
 *
 * Return: new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;
	return (new_node);
}
