#include "function_pointers.h"
#include <stdlib.h>
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

	if (size == 0 || array == NULL || action == NULL)
		exit(1);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
