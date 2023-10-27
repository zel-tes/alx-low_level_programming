#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name
 * @argc: integer1
 * @argv: integer2
 *
 * Return: always 0;
 **/
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	int x, y;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
