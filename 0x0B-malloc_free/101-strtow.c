#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reducespace - Prints an array of string
 * @str: The array to print
 *
 * Return: nothing
 **/

char *reducespace(char *str)
{
	char *strg;
	int i, j, len;

	len = strlen(str);
	strg = (char *)malloc((len + 1) * sizeof(char));

	if (strg == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			strg[j] = ' ';
			j++;
		}
		else
		{
			strg[j] = str[i];
			j++;
		}
	}
	return (strg);
}

/**
 * strtow - Prints an array of string
 * @str: The array to print
 *
 * Return: nothing
 **/
char **strtow(char *str)
{
	char **st;
	int i, cwords;
	unsigned long int j;

	str = reducespace(str);
	if (str == NULL)
		return (NULL);
	cwords = 2;
	if (*str == ' ')
	{
		cwords += 1;
		str++;
	}
	st = (char **)malloc(cwords * sizeof(char *));
	if (st == NULL)
		return (NULL);
	for (i = 0; i < cwords; i++)
	{
		st[i] = malloc(strlen(st[i]) + 1);
		if (st[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < cwords; i++)
	{
		for (j = 0; j < strlen(st[i]); j++)
		{
			st[i][j] = str[j];
			st[i][strlen(st[i])] = '\n';
		}
	}
	return (st);
}
