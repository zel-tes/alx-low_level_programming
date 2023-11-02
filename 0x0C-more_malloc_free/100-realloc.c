#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @old_size: the size of the memory to print
 * @new_size: updated size
 *
 * Return: Nothing.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	char *str, *nstr;
	unsigned int i;

	ptr = malloc(old_size);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	str = (char *)ptr;
	nptr = (void *)malloc(new_size);
	nstr = (char *)nptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			nstr[i] = str[i];
		}
	}
	return (nstr);
	free(ptr);
	free(nptr);
}
