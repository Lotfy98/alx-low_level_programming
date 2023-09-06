#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid = frees a 2 dimensional grid
 *@grid: integer
 *@height: integer
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
