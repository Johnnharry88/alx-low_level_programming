#include "main.h"
/**
 * free_grid -program that frees an array of two dimension
 * @grid: Integer pointer parameter
 * @height: integer parameter
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	if (height > 0 && grid != NULL)
	{
		whilw (height >= 0)
		{
			free(grid[height]);
			free[grid];
			height = height - 1;
		}
	}
}
