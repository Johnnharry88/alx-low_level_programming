#include "main.h"
/**
 * _strlen -progrman that outputs the length of string
 * @s: Input character pointer
 * Return: (0) Success
 */
int _strlen(char *s)
{
	int x = 0;
	while(*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
