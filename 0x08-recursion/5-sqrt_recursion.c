#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: int
 *
 * Return: int
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n % 2 == 0)
		return (2 * _sqrt_recursion(n / 4));
	if (n % 3 == 0)
		return (3 * _sqrt_recursion(n / 9));
	if (n % 5 == 0)
		return (5 * _sqrt_recursion(n / 25));
	if (n % 7 == 0)
		return (7 * _sqrt_recursion(n / 49));
	return (-1);
}
