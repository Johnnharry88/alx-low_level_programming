#include "main.h"
/**
 * sqt_x - program that returns natural numbers
 * @a: integer number
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
 * _sqrt_recursion -program that returns natural square root of number
 * @n: Integer value
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqt_x(n, 0));
}
