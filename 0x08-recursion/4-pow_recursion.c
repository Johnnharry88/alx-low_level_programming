#include "main.h"
/**
 * _pow_recursion - program that calculats the power of a given integer
 * @x: Input integer
 * @y: Input integer
 * Return:power of integer values
 */
int _pow_recursion(int x, int y)
{
	if (!(y > 0))
	{
		return (-1);
	}
	else if (y < 1)
	{
		return (0);
	}
	else
	{
		return (x * pow(x, y - 1));
	}
}
