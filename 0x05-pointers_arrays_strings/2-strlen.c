#include "main.h"
/**
 * _strlen -program gives out the length of a string
 * @s: This is a string
 * Return: (count)
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
return (count);
}
