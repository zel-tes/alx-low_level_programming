#include <stdio.h>

/**
 * main- print the name
 * @argv: array pointer
 * @argc: count argument
 *
 * Return: always 0;
 **/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
