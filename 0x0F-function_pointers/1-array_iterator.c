#include "function_pointers.h"
/**
 * array_iterator -porogram that runs functions passed
 * as parameters
 * @array: an array pointer
 * @size: array size
 * @action: pointetr to a function that takes integer input
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int alx = 0;

	if (array)
	{
		if (action)
		{
			while (alx < size)
			{
				action(array[alx]);
				alx += 1;
			}
		}
	}
}
