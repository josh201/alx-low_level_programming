#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free a 20 array of integers
  * @grid: 2D array integer to be filled
  * @height: height of grid
  */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
