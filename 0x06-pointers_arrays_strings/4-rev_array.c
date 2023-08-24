#include "main.h"
/**
 *reverse_array - program that returns arays of integers upside down
 * @a: array
 * @n: number of elements contained in an array
 * Return: (0) Success
 */
void reverse_array(int *a, int n)
{
	int alx = 0, school = 0;

	for (alx = 0; alx < n--; alx++)
	{
		school = a[alx];
		a[alx] = a[n];
		a[n] = school;
	}
}
