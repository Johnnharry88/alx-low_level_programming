#include "main.h"
/**
 * malloc_checked -program that uses maloc to allocate memory
 * @b: Input value
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *alx;

	alx = malloc[b];
	if (alx == NULL)
	exit(98);
	return (alx);
}
