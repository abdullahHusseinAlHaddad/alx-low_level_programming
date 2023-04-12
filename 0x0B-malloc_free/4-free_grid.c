#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free grid.
 * @grid: two dimensional array.
 * @height: The height.
 */
void free_grid(int **grid, int height)
{
	int de = 0;

	for (; de < height; de++)
		free(grid[de]);
	free(grid);
}
