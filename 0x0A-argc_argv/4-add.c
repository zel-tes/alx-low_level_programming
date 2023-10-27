#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- print the name
 * @argc: integer1
 * @argv: integer2
 *
 * Return: always 0;
 **/

int main(int argc, char **argv)
{
	int i, x;

	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				fprintf(stderr, "Error\n");
				return (1);
			}
			else
			{
				x = atoi(argv[i]);
				sum = sum + x;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
