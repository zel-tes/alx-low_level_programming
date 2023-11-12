#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_all - prints
 * @format: format strig
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *strval, cval;
	const char *str;
	int inv;
	double flov;

	va_start(ap, format);
	str = malloc(strlen(format) * sizeof(char));
	if (str == NULL)
		exit(1);
	str = format;
	while (*str != '\0')
	{
		switch (*str++)
		{
			case 'c':
				cval = va_arg(ap, int);
				putchar(cval);
				break;
			case 'd':
				inv = va_arg(ap, int);
				printf("%d", inv);
				break;
			case 'f':
				flov = va_arg(ap, double);
				printf("%f", flov);
				break;
			case 's':
				strval = va_arg(ap, char *);
				while (*strval != '\0')
				{
					putchar(*strval);
					strval++;
				}
				break;
			default:
				putchar(*(str - 1));
		}
	}
	va_end(ap);
}
