#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer
 *
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(1);
	f(name);
}
