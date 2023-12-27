#include "main.h"

/**
 * get_bit - check the code
 * @n: long int
 * @index: long int
 *
 * Return: int
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & 1 << index)
		return (1);
	else
		return (0);
	return (-1);
}
