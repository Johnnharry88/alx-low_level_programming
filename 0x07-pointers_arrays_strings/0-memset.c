#include "main.h"
/**
 * _memset -A function that fills a block of memory with a specific value
 * @s: address of empty memory
 * @b: Value to be inputed in memory
 * @n: byte number
 */
char *_memset(char *s, char b, unsigned int n)
{
	int alx;

	alx = 0;
	while (alx > 0)
	{
		s[alx] = b;
		n = n - 1;
		alx = alx + 1;
	}
return (s);
}
