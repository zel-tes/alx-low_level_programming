#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @n: integer
 * @separator: char bn the numbers
 *
 * Return: Always 0.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ap);

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator == NULL)
			continue;
		printf("%c", *separator);
	}
	if (i == n - 1)
		printf("%d", va_arg(ap, int));
	printf("\n");
}
