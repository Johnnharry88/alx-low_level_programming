#include "main.h"
/**
 * clear_bit - program that wipes bit value to 1
 * @index: position at a given number
 * @n: integer number to be cleared
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int alx;

	if (index < 63)
	{
		alx = 1 << index;
		*n = *n & (~alx);
		return (1);
	}
	else
		return (-1);
}
