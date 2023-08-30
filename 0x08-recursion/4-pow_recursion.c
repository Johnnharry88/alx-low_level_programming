#include "main.h"
/**
 * _pow_recursion - program that calculats the power of a given integer
 * @x: Input integer
 * @y: Input integer
 * Return: power of integer values
 */
int _pow_recursion(int x, int y)
{
	if (!(y > 0))
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
