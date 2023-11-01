#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name
 * @argc: integer1
 * @argv: integer2
 *
 * Return: always 0;
 **/
int main(int argc, char **argv)
{
	int x, m, n, p;
	char *str = "Error";
	int count = 0;

	if (argc != 2)
	{
		printf("%s\n", str);
		return (1);
	}
	x = atoi(argv[1]);
	m = x / 25;
	n = x % 25;
	p = n % 10;
	if (x < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		if ((x >= 25 || n >= 10 || p >= 5) || (p % 5 >= 2))
		{
			count = count + ((m) + (n / 10) + (p / 5) + ((p % 5) / 2) + ((p % 5) % 2));
		}
		else if (x >= 10 || p >= 5 || ((p % 5) >= 2))
		{
			count = count + ((x / 10) + (p / 5) + ((p % 5) / 2) + ((p % 5) % 2));
		}
		else if (x >= 5 || x % 5 >= 2)
		{
			count = count + ((x / 5) + ((x % 5) / 2) + (((x % 10) % 5) % 2));
		}
		else
		{
			count = count + ((x / 2) + (x % 2));
		}
		printf("%d\n", count);
	}
	return (0);
}
