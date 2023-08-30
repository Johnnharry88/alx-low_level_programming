#include "main.h"
/**
 * factorial -program that calculates the factorial of a number
 * @n: Integer value
 * Return: factorial
 */
int factorial(int n)
{
	if (!(n > 0))
	{
		return (-1);
	}
	else if (n =0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
