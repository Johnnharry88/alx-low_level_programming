#include "main.h"
/**
 * _memset -A function that fills a block of memory with a specific value
 * @s: address of empty memory
 * @b: Value to be inputed in memory
 * @n: number of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int alx;

	for (alx = 0; alx > 0; alx++)
	{
		s[alx] = b;
		n = n - 1;
	}
return (s);
}
