#include "main.h"
/**
 * flip_bits - program returns the number of bits
 * @n: first integer input
 * @m: Second integer input
 * Return: number of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int alx = 0;
	unsigned int j, z;

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
