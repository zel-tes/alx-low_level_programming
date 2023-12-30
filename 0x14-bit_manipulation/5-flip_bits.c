#include <stdio.h>
#include "main.h"
/**
 * flip_bits - check the code
 * @n: long int;
 * @m: long int;
 *
 * Return: no of flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count_1;

	if ((n & (n - 1)) == 0 && (m & (m - 1)) == 0)
		count_1 = 0;
	if ((n & (n - 1)) != 0 && (m & (m - 1)) != 0)
		count_1 = 1;
	if ((n & 1) && (m & 1))
		count_1 = 1;
	if (!(n & 1) && (m & 1))
		count_1 = 1;
	if ((n & 1) && (m & (m - 1)) != 0)
		count_1 = 1;
	if (!(n & 1) && !(m & 1) && (n & (n - 1)) == 0 && (m & (m - 1)) == 0)
		count_1 = 0;
	while (n)
	{
		n = n & (n - 1);
		count_1++;
		if (n == m)
		{
			count_1 = count_1 + 1;
			break;
		}
	}
	return (count_1);
}
