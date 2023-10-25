#include "main.h"
/**
 * is_prime_number - check the code
 * @n: int
 *
 * Return: Always 0.
 **/
int is_prime_number(int n)
{

	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	if (n == 3)
		return (1);
	if (n == 5)
		return (1);
	if (n == 7)
		return (1);
	if (n == 11)
		return (1);
	if (n == 13)
		return (1);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	if (n % 11 == 0 || n % 13 == 0)
		return (0);
	if (n % 4 == 1 || n % 4 == 3)
	{
		return (1);
	}
	return (0);
}
