#include "main.h"
/**
 * print_number - prints number characters
 * @n: paramter of interger
 * Return: (0)
 */
void print_number(int n)
{
	unsigned int digit;

	digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -n;
	}
	if (digit / 10 != 0)
	{
		print_number(digit / 10);
	}
	_putchar((digit % 10) + '0');
}
