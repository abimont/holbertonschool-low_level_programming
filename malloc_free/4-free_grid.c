#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: pointer to grid
 * @height: height of grid
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height == 0)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
