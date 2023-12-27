#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 * @h: list pointer
 *
 * Return: no of nodes.
 **/
size_t print_listint(const listint_t *h)
{
	int i;
	const listint_t *k;

	k = h;
	i = 0;

	while (k != NULL)
	{
		printf("%d", k->n);
		printf("\n");
		k = k->next;
		i++;
	}
	return (i);
}
