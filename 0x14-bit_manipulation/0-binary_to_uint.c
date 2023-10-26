#include "main.h"
/**
 * binary_to_uint - function that converts binary digit to
 * an unsigned integer.
 * @b: Binary digit to be converted.
 * Return: 0 or uunsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int alx = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	
	if (b)
	{
		while (b[alx] != '\0')
		{
			if (b[alx] < '0' || b[alx] > '1')
				return (0);
			res = (b[alx] - '0') + (2 * res);
		alx += 1;
		}
	}
return (res);
}
