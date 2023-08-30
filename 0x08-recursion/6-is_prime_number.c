#include "mina.h"
/**
 * prime -program that evaluates the prime status of an integer
 * @x: Input integer
 * @y: Working integer
 * Return: (0) or (1)
 */
int prime(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else if (x % y == 0 && y > 0)
	{
		return (0);
	}
	else
	{
		return (prime(x, y - 1));
	}
}
/**
 * is_prime_number -program that outputs a prime number
 * @n: input integer
 * Return: Prime(n)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (o);
	}
	else
	{
		return (prime(n, n - 1));
	}
}
