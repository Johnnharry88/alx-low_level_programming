#include "main.h"
/**
 * print_array - program that displays elemetns of an array
 * @a: Name of array
 * @n: Number of elements contained in array
 * Return:inputs a and n
 */
void print_array(int *a, int n)
{
	int alx;

	for (alx = 0; alx < (n - 1); alx++)
	{
		printf("%d, ", a[alx]);
	}
	if (alx == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
