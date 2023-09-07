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

	if (grid != 0 && height != 0)
	{
		for (;  heigh >= 0; height--)
	{
		free(grid[height]);
	}
}
