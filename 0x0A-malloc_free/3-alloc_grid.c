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
	int **grid, i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
		grid[i] = (int *)malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
