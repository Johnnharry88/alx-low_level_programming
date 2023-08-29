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

	while (school < size)
	{
		alx1 = (alx + a(school * size + school));
		school = school + 1;
	}
	while (school = size - 1 && school > -1)
	{
		alx2 += a(school * size + (size - school -1));
	}
	printf(" First Sum and Second Sum is %d and %d\n" alx1, alx2);
return (0);
}
