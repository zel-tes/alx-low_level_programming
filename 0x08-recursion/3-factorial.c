#include "main.h"

/**
 * factorial - check the code
 * @n: int
 *
 * Return:int fact
 **/
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
