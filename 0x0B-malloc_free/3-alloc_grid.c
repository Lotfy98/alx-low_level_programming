#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 *alloc_grid - returns a pointer to a 2D array of ints
 *@width: integer
 *@height: integer
 *Return: array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, e = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (e < i)
			{
				free(grid[e]);
				e++;
			}
			free(grid);
			return (NULL);
		}

		while (e < width)
		{
			grid[i][e] = 0;
			e++;
		}
		i++;
	}
	return (grid);
}
