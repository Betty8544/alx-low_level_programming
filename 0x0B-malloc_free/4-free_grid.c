#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free the grid fun
  * @grid: the fun
  * @height: the hight
  *
  * Return: free grid fun
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
