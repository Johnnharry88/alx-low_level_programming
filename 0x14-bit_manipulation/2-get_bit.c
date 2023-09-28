#include "main.h"
/**
 * get_bit - a program that retunrs the value of a bit at an index
 * @index: showing the position of bit from 0.
 * @n: bit value at the position of index
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index == 0)
	{
		return (n & 1);
	}
	if (index > 63)
		return (-1);
	return (get_bit(n >> 1, index - 1));
}
