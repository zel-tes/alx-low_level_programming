#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - check the code
 * @n: integer
 * @separator: seperator bn str.
 *
 * Return: Always Nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%s", va_arg(ap, char *));
		printf("%c", *separator);
	}
	if (i == n - 1)
	{
		printf("%s", va_arg(ap, char *));
	}
	printf("\n");
}
