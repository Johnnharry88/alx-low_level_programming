#include "search_algos.h"

/**
 * binary_search - searches foa r value using binary search algos
 * @array: pointer to the first element in an array
 * @size: number of elements in input array
 * @value: value to be serched for in an arrya
 * Return: index of value if found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
