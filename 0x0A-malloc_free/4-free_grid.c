#include "holberton.h"

/**
 * free_grid - frees a widthxlength grid of int
 * @grid: the grid to be free'd
 * @height: height of the grid
 **/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
