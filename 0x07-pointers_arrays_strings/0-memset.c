#include "main.h"
/**
 * _memset -program that fills block of memory with a specific value
 * @s: address of empty memory
 * @b: Value to be inputed in memory
 * @n: number of byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int alx = 0;

	for (alx = 0; n > 0; alx++)
	{
		s[alx] = b;
		n -= 1;
	}
return (s);
}
