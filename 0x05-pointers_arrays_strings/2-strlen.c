#include "main.h"
/**
 * strlen -gives out the length of a strng
 * @s: This is a string
 * Return: value of length
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

