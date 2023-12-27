#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @h: struct pointer.
 *
 * Return: number of nodes.
 **/
size_t listint_len(const listint_t *h)
{
	int i;
	const listint_t *k;

	k = malloc(sizeof(listint_t));
	k = h;
	i = 0;

	while (k != NULL)
	{
		k = k->next;
		i++;
	}
	return (i);
}
