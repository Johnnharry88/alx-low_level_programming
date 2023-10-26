#include "main.h"
/**
 * set_bit -function that sets bit value to 1 as
 * assigned index.
 * @index: the index to be set.
 * @n: number to be workd on.
 * Return: -1 or 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int xty;

	xty = 1LU << index;
	if (index >= (8 * (sizeof(unsigned long int))))
		return (-1);
	*n = (*n | xty);
	return (1);
}
