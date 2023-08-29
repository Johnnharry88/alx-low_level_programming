#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -program that prints sum of two diagonals
 * @a: Pointer 
 * Size: Integer variable
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int alx1 = 0, alx2 = 0, school = 0;

	for  (school = 0; school < size; school++)
	{
		alx1 = (alx1 + a(school));
		a = a + size;
	}
	a = a - size;
	for (school =0; school < size ;school++)
	{
		alx2 += a[school];
		a = a + size;
	}
	printf(" First Sum and Second Sum is %d and %d\n" alx1, alx2);
return (0);
}
