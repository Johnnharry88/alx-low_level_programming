#include "main.h"
/**
 * clear_bit - function that sets value of bit to 0
 * at assigned index.
 * @index: index assigned.
 * @n: number to be set.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int alx = ~(1LU << index);

	if (index >= (8 * sizeof(unsigned long int)))
		return (-1);
	*n = (*n & alx);
	return (1);
}
