#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: long int
 *
 * Return: Nothing
 **/
void print_binary(unsigned long int n)
{
	int i, count;

	count = calc_digit(n);

	if (n == 0)
		_putchar('0');
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(n & (1UL << i) ? '1' : '0');
	}
}
/**
 * calc_digit - check the code
 * @n: long int
 *
 * Return: int
 **/
int calc_digit(unsigned long int n)
{
	int count = 0;

	while (n > 0)
	{
		n = n >> 1;
		count++;
	}
	return (count);
}
