#include "main.h"
/**
 *alloc_grid -program that returns a pointer to an
 *array of two dimensions
 *@width: Input of integer data type
 *@height: Input of integer data type
 *Return: NULL or  pointer.
 */
int **alloc_grid(int width, int height)
{
	int **alpha;
	int jhn, chi;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	alpha = malloc(sizeof(int *) * height);

	if (alpha == NULL)
	{
		free(alpha);
		return (NULL);
	}
	for (jhn = 0; jhn < height; jhn++)
	{
		alpha[jhn] = malloc(width * sizeof(int));
		if (alpha[jhn] == NULL)
		{
			for (jhn--; jhn >= 0; jhn--)
			{
				free(alpha[jhn]);
				free(alpha);
				return (NULL);
			}
		}
	}
	for (jhn = 0; jhn < height; jhn++)
	{
		for (chi = 0; chi < width; chi++)
		{
			alpha[jhn][chi] = 0;
		}
	}
	return (alpha);
}
