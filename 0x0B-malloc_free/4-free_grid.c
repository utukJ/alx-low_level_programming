#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previously created by alloc_grid
 * @grid: 2d grid
 * @height: height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	
	free(grid);
}
