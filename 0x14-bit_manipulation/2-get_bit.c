#include "main.h"
/**
  * get_bit - function that returns value of bit at an assigned
  * index.
  * @index: count starting from 0.
  * @n: number to be returned by get_bit.
  * Return:  -1 or value of bit of unsigned ndex.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int alx = 0;

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	alx = ((n >> index) & 1);
	return (alx);
}
