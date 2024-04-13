#include "search_algos.h"
/**
 * size_min - returns the minimum value of two size_t
 * @x: first value
 * @y: second value
 * Return: the minimum value 
 */
size_t size_min(size_t x, size_t y)
{
	if (x >= y)
		return y;
	else
		return x;
}

/**
 * jump_search - seaches for a value in sorted arrray
 * @array: pointer to the first element of array to search
 * @size: number of elements in array
 * @value: value to searched in array
 * Return: index containing value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right;
	size_t j;

	if (!array || size == 0)
		return (-1);

	j = sqrt(size);

	for (right = 0; right< size && array[right] < value;
	     left = right, right += j)
	{
		printf("value checked array[%lu] = [%d]\n",
		       right, array[right]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (; left <= size_min(right, size -1); left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}
	return (-1);
}
