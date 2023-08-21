#include "main.h"
/**
 * swap_int -exchanges values of int
 * @a: integer to exchange
 * @b: integer to exchange
 * Return: (0) Success
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
