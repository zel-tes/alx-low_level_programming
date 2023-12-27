#include "main.h"

/**
 * clear_bit - check the code
 * @n: int
 * @index: int
 * Return: 1
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & (*n & ~(1 << index));
	return (1);
}
