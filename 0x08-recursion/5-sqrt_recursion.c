#include "main.h"
/**
 * sqt_x - program that returns natural numbers
 * @y: integer number
 * @z: integer number
 * Return: square root 
 */
int sqt_x(int a, int z)
{
	if (z * z == a)
	{
		return (z);
	}
	else if (z * z > a)
	{
		return (-1);
	}
	else 
	{
		return (sqt_x(a, z + 1));
	}
}
 /**
 *  _sqrt_recursion -programs that estimates the square root of integer
 * @n: Integer value
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqt_x(n, 0));
}
