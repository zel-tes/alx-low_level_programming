#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 * @h: list pointer
 *
 * Return: no of nodes.
 **/
size_t print_list(const list_t *h)
{
	int i;
	const list_t *k;

	k = (list_t *)malloc(sizeof(list_t));
	k = h;
	i = 0;

	while (k != NULL)
	{
		if (k->str == NULL)
		{
			printf("[0](nil)");
		}
		if (k->str != NULL)
		{
			printf("[%d] %s", k->len, k->str);
		}
		printf("\n");
		k = k->next;
		i++;
	}
	return (i);
}
