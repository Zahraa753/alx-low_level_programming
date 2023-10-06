#include "main.h"

/**
 * free_grid - the used function
 * @height : the height of the grid
 * @grid : the passed array of 0 or any num
 *
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int u = 0;

	for (; u < height; u++)
		free(grid[u]);
	free(grid);
}
