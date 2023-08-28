#include "main.h"
/**
 * _memset -function that fills a block of memory with a specific value
 * @s: address of empty memory
 * @b: Value to be inputed in memory
 * @n: number of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int alx;

		alx = 0;
	while (n > 0)
	{
		s[alx] = b;
		n = n - 1;
		alx += 1;
	}
return (s);
}
