#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: int
 * @y: int
 *
 * Return: integer
 **/
int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	z = x * _pow_recursion(x, y - 1);
	return (z);
}
