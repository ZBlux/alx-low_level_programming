#include "main.h"

/**
 *free_grid - frees the memory of two dimensional array
 *@grid: array
 *@height: string
 *
 *Return: NULL if
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
