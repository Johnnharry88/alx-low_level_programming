#include "main.h"
/**
 * _strcat - program that concatenates two strings
 * @dest: final string
 * @src: Initiation string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int string = 0, g = 0;

	while (dest[string] != '\0')
	{
		string++;
	}
	for (; src[g] != '\0'; g++, string++)
	{
		dest[string] = src[g];
	}
	dest[string] = '\0';
	return (dest);
}
