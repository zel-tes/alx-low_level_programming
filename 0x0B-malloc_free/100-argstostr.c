#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - check the code for ALX School students.
 * @ac: no of arguments
 * @av: arguments
 *
 * Return: pointer.
 **/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;

	for (i = 0; i < ac; i++)
		len = len + strlen(av[i]);
	str = (char *)malloc((ac + len) * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;

	for (i = 0; i < ac; i++)
	{
		if (*av[i] != '\0')
		{
			len = strlen(av[i]);
			for (j = 0; j < len; j++)
			{
				str[k] = av[i][j];
				k++;
			}
			if (i < ac)
			{
				str[k] = '\n';
				k++;
			}
		}
	}
	return (str);
}
