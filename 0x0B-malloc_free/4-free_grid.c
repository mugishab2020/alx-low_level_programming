#include "main.h"
#include <stdlib.h>
/**
 * free_grid - funnction to free allocated 2 D array
 * @grid: the array to make free
 * @height: the size of array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
free(grid);
}
