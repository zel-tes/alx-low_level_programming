#include <stdio.h>

/**
 * main- print the name
 * @argv: array pointer
 * @argc: count argument
 *
 * Return: always 0;
 **/
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
