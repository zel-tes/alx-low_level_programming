#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: size of memory
 *
 * Return: Always void;
 **/
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b * sizeof(*str));
	if (str == NULL)
	{
		free(str);
		exit(98);
	}
	return (str);
	free(str);
	exit(0);
}
