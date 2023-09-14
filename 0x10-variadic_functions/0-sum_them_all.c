#include "variadic_functions.h"
/**
 * sum_them_all -function that sums up integer with varying number
 * of arguments
 * @n: The first integer input/arguments
 * Return: (0) or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int cunt = 0, ans = 0;
	va_list wrk;

	if (n == 0)
		return (0);
	va_start(wrk, n);
	while (cunt < n)
	{
		ans = ans + (va_arg(wrk, int));
	cunt += 1;
	}
	return (ans);
}
