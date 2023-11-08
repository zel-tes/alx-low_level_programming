#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing.
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
