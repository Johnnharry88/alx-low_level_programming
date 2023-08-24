#include "main.h"
/**
 * _strncat -concatenates two strings
 * @dest: Output string
 * @src: Input string
 * @n: Input integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int alx = 0, school = 0;

	while (dest[alx] != '\0')
	{
		alx++;
	}
	for (school = 0; school < n && src[school] != '\0'; school++; alx++)
	{
		dest[alx] = src[school];
	}
	dest[alx] = '\0';
return (dest);
}
