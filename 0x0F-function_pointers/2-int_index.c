#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: size of the array.
 * @cmp: fun pointer.
 *
 * Return: i if true.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		while (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
