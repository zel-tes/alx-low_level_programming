#include "main.h"
#include <stdlib.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: string pointer.
 *
 * Return: char pointer.
 **/
char *_strdup(char *str)
{
	char *st;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	st = malloc((2 * _strlen(str) + 1) * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= 2 * _strlen(str) ; i++)
	{
		st[i] = str[i];
		st[_strlen(str)] = '\0';
	}
	return (st);
}

/**
 * _strlen - calculate the length of string
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len = len + 1;
	}
	return (len);
}
