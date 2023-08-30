#include "main.h"
/**
 * _sqrt_recursion -programs that estimates the square root of integer
 * @n: Integer value
 * Return: Square root of numbers
 */
int _sqrt_recursion(int n)
{
	if (!(n > 0))
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
