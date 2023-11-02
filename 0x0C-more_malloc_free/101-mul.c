#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name
 * @argc: integer1
 * @argv: integer2
 *
 * Return: always 0;
 **/
int main(int argc, char **argv __attribute__((unused)))
{
	int i, num_1, num_2;
	char *str = "Error";

	if (argc != 3)
	{
		for (i = 0; i < 5; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
		exit(98);
	}
	num_1 =  atoi(argv[1]);
	num_2 = atoi(argv[2]);
	multiply(&num_1, &num_2);
	return (0);
}

/**
 * multiply - print the name
 * @x: integer1
 * @y: integer2
 *
 * Return: always product
 **/
int multiply(int *x, int *y)
{
	return ((*x) * (*y));
}
