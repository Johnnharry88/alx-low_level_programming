#include "variadic_functions.h"
/**
 * print_numbers- function that prints numbers using variable arguments
 * as its parameter
 * @separator: constant string to be printed bwtweeen number
 * @n: number of integers passed to the function
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digit;
	unsigned int rec = 0;

	va_start(digit, n);

	while (rec < n)
	{
		printf("%d", va_arg(digit, int));

		if (separator != NULL)
			printf("%s", separator);
	rec = rec + 1;
	}
	printf("\n");
}

