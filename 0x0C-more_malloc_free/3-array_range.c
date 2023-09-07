#include "main.h"
/**
 * array_range - program that outputs array of integer
 * @min: Variable of minimum array size
 * @max: Variable of maximm array size
 * Return: NULL or Pointer
 */
int *array_range(int min, int max)
{
	int *alx;
	int msure, jhn;

	if (min > max)
	return (NULL);
	else
	msure = 1 + max - min;
	
	alx = malloc(sizeof(int) * msure);
	if (alx == NULL)
		return (NULL);
	for (jhn = 0; min <= max; jhn++)
	{
		alx[jhn] = min++;
	}
return (alx);
}
