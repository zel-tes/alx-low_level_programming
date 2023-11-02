#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: integer
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;
	int x;

	x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = x;
	return (ptr);
}
