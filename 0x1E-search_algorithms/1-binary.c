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
	int left, mid, right;
	int a;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (a = left; a <= right; a++)
			printf("%i%s", array[a], a == right ? "\n" : ", ");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] < value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
