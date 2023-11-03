#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - print the name
 * @argc: integer1
 * @argv: integer2
 *
 * Return: always 0;
 **/
int main(int argc, char **argv __attribute__((unused)))
{
	int i, result;
	char *num_1, *num_2;
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
	num_1 = check_digit(argv[1]);
	num_2 = check_digit(argv[2]);

	if (num_1 == NULL || num_2 == NULL)
	{
		for (i = 0; i < 5; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
		exit(98);
	}
	result = multiply(num_1, num_2);
	print(result);
	_putchar('\n');
	return (0);
}

/**
 * check_digit - check the the number
 * @str: string
 *
 * Return: pointer
 **/

char *check_digit(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			return (NULL);
		}
	}
	return (str);
}

/**
 * multiply - print the product
 * @x: integer1
 * @y: integer2
 *
 * Return: always product
 **/

int multiply(const char *x, const char *y)
{
	int m = atoi(x);
	int n = atoi(y);

	return (m * n);
}
/**
 * print - print the product
 * @num: product
 *
 * Return: Nothing
 **/
void print(int num)
{
	int i, k, z;
	char str[1000000];

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	k = 0;
	while (num > 0)
	{
		z = num % 10;
		str[k] = z + '0';
		num /= 10;
		k++;
	}
	for (i = k - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
}
