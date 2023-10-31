#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: string pointer.
 *
 * Return: char pointer.
 **/
char *_strdup(char *str)
{
	char *st;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	st = malloc((2 * strlen(str) - 12) * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= 2 * strlen(str) ; i++)
	{
		st[i] = str[i];
	}
	st[2 * strlen(str)] = '\0';
	return (st);
}
