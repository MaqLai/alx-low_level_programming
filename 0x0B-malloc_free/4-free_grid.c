#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a two dimensional grid previously created
 * by the alloc_grid function.
 * @grid: a pointer to a pointer integer.
 * @height: the number of rows in the grid.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
