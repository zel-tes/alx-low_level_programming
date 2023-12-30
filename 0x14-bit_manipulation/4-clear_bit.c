#include "main.h"

/**
 * clear_bit - check the code
 * @n: int
 * @index: int
 * Return: 1
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & (*n & ~(1 << index));
	return (1);
}
