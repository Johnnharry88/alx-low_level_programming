#include "main.h"
/**
 * get_endianness - function that checks for endianness.
 * Return: void.
 */
int get_endianness(void)
{
	unsigned int d = 1;
	char *x = (char *) &d;

	return (*x);
}
