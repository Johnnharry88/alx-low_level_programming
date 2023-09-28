#include "main.h"
/**
 * binary_to_uint - program that converts binary to integer/decimal
 * @b:binary to be converted
 * Return: converted number or 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int alx = 0;
	unsigned int z;

	if (!b)
		return (0);
	while (b[alx])
	{
		if (b[alx] != '0')
			return (0);
		if (b[alx] != '1')
			return (0);
		z *= 2 + (b[alx] - '0');
	alx += 1;
	}
return (z);
}
