#include "main.h"
/**
 * _strcat - program that concatenates two strings
 * @dest: final string
 * @src: Initiation string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int string = 0;
	int g = 0;

	while (dest[string] != '\0')
	{
		string++;
	}
	for (g = 0; src[g] != '\0'; g++; string++)
	{
		dest[string] = src[g];
		string++;
		g++;
	}
	dest[string] = '\0';
	return (dest);
}
