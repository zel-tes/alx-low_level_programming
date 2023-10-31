#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to 2d array.
 * @height: the row of the array
 * @width: width of the grid
 *
 * Return: pointer
 **/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
		free(array);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			return (NULL);
			free(array);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
	free(array);
}
