#include "search_algos.h"

/**
 * linear_search - searches for value using linear earch algorithm
 * @array: input array
 * @size: size of the input array
 * @value: value to be searched in array
 * Return: index of value found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n;

	if (array == NULL)
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%li] = [%i]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
