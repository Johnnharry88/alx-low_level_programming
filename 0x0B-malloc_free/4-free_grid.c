#include "main.h"
/**
 * free_grid -program that frees an array of two dimension
 * @grid: Integer pointer parameter
 * @height: integer parameter
 * Return: Void
 */
void free_grid(int **grid, int height)
{

	int alx;

	for (alx = 0; alx < height; alx--)
		free(grid[alx]);
	free[grid];
}
