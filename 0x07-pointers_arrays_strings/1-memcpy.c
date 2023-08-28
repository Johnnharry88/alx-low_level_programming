#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: Memory copied to
 * @src: memory copied from
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int alx = 0, school = n;

	while (alx < school)
	{
		dest[alx] = src[alx];
		n -= 1;
		alx += 1;
	}
return (dest);
}
