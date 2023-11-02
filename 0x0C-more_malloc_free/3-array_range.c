#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: minmum int
 * @max: maximum int
 *
 * Return: array.
 **/
int *array_range(int min, int max)
{
	int *rnge, n, i;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	rnge = malloc(n * sizeof(int));
	if(rnge == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		rnge[i] = min;
		min = min + 1;
		if (rnge[i] == max)
		{
			break;
		}
	}
	return rnge;
	free(rnge);
}
