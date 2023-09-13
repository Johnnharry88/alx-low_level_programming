#include "function_pointers.h"
/**
 * int_index - program that searches for integers
 * @cmp: pointer to fucntion that compares integer values
 * @size: Array size
 * Return: (-1) or (0) or cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int alx = 0;

	if (array)
	{
		if (cmp)
		{
			if (!(size > 0))
				return (-1);
			while (alx < size)
			{
				if (cmp(array[alx]))
				return (alx);
				alx = alx + 1;
			}
		}

	}
	return (-1);
}
