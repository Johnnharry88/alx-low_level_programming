#include "main.h"
/**
 * set_bit - program that sets tht value of bit to 1
 * @index: shows the position
 * @n: number to be set.
 * Return: 1 or -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int alx;

	if (index < 63)
	{
		alx = 1 << index;
		*n = *n | alx;
	return (1);
	}
	else
		return (-1);
}
