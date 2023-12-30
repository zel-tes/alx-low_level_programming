#include "main.h"

/**
 * set_bit - check the code
 * @n: long int
 * @index: long int
 *
 * Return: 1.
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
