#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
/**
 * main - Struct op
 * @argc: no of argum.
 * @argv: argum point
 *
 * Return: integer
 **/
int main(int argc, char **argv)
{
	int x, y, z;
	char *a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	a = argv[2];

	z = get_op_func(a)(x, y);
	printf("%d\n", z);
	return (0);
}
