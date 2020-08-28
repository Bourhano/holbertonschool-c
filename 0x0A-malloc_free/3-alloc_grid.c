#include "holberton.h"

/**
 * alloc_grid - creates a widthxlength grid of int
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: double pointer array of int
 **/
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j, ok = 1;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *)); /* always 8, ref size */
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == 0)
			ok = 0;
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	if (!ok)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		return (NULL);
	}
	return (grid);
}
