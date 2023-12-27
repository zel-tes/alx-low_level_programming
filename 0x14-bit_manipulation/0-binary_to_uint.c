#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_to_uint - check the code
 * @b: char pointer
 *
 * Return: integer
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, x, y;

	y = 0;

	if (b == NULL)
		return (0);
	while (b[y] != '\0')
	{
		if (b[y] != '1' && b[y] != '0')
		{
			return (0);
		}
		y++;
	}
	x = 0;

	for (i = 0; i < y; i++)
	{
		x = x + ((b[i] - '0') * (power(2, y - 1 - i)));
	}
	return (x);
}
/**
 * power - check the code
 * @a: integer
 * @x: integer
 *
 * Return: integer
 **/
int power(int x, int a)
{
	int i, result;

	result = 1;
	for (i = 0; i < a; i++)
		result = result * x;
	return (result);
}
