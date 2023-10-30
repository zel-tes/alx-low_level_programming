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
	int i, m;

	if (str == NULL)
	{
		return (NULL);
	}
	m = _strlen(str);
	st = malloc((2 * m + 1) * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= 2 * m ; i++)
	{
		st[i] = str[i];
		st[2 * m] = '\0';
	}
	return (st);
	free(st);
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
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

