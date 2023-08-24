#include "main.h"
/**
 * _strncpy - program thaat copies striing
 * @dest: copied string
 * @src: string to be copied
 * @n: Input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int alx = 0;

	for (alx = 0; alx < n && src[alx] != '\0'; alx++)
	{
		dest[alx] = src[alx];
	}
	for (alx = 0; alx < n; alx++)
	{
		dest[alx] = '\0';
	}
return (dest);
}
