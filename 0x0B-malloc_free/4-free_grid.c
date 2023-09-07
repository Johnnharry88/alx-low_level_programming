#include "main.h"
#include <stdlib>
/**
 * free_grid -program that frees an array of two dimension
 * @grid: Integer pointer parameter
 * @height: integer parameter
 * Return: Void
 */
void free_grid(int **grid, int height)
{

	int ugo;

	for (ugo = 0; ugo < height; ugo++)
	{
		free(grid[ugo]);
	free[grid];
	}
}
