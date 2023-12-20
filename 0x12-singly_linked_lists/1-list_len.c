#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 * @h: struct pointer.
 *
 * Return: number of nodes.
 **/
size_t list_len(const list_t *h)
{
	int i;
	const list_t *k;

	k = (list_t *)malloc(sizeof(list_t));
	k = h;
	i = 0;

	while (k != NULL)
	{
		k = k->next;
		i++;
	}
	return (i);
}
