#include "main.h"
/**
 * binary_to_uint - program that converts binary to integer/decimal
 * @b:binary to be converted
 * Return: converted number or 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int alx = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		alx = alx << 1;
		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1')
			alx = alx | 1;
		b = b + 1;
	}
	return (alx);
}
