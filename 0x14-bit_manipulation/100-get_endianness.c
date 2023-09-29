#include "main.h"
/**
 * get_endianness - function that performs endianess
 * Return: 0.
 */
int get_endianness(void)
{
	unsigned int alx = 1;
	char *sch = (char *) &alx;

	return ((int) *sch);
}
