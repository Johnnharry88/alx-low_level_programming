#include "main.h"
/**
 * flip_bits - function that returns number of bits
 * @n: first number to be counted.
 * @m: second number to be counted.
 * Return: Number of bits counted.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int alx;
	unsigned int j;
	unsigned int z;

	alx = 0;
	while (!(n == 0 && m == 0))
	{
		j = n & 1;
		z = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (j != z)
			alx = alx + 1;
	}
	return (alx);
}

