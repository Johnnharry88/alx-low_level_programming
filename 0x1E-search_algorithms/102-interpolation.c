#include "search_algos.h"

/**
 * interpolation_search - searches for a value in  sorted array
 * using interpolation search algorithmn
 * @array: pointer to first element of array to search
 * @size: number of element in an arrya
 * @value: value to be searched for in array
 * Return: index containing value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, j;

	if (!array)
		return (-1);

	while ((array[right] != array[left]) &&
	       (value >= array[left]) && (value <= array[right]))
	{
		j = left + (((double)(right - left) / (array[right] - array[left]))
			   * (value - array[left]));
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] < value)
			left = j + 1;
		else if (value < array[j])
			right = j - 1;
		else
			return (j);
	}
	if (value == array[left])
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		return (left);
	}
	j = left + (((double)(right - left) / (array[right] - array[left]))
		    * (value - array[left]));
	printf("Value checked array[%lu] is out of range\n", j);
	return (-1);
}
