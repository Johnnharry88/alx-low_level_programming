#include "main.h"
/**
 * print_binary - function that outputs the binary
 * eqivalent of input number.
 * @n: Number to be represented.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
