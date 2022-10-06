/*
 * Author: Francis Ofori Anane
 * Date: 5/10/2022
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The array of integers to be freed.
 * @height: The height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
