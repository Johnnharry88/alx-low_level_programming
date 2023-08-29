#include "main.h"
/**
 * _strpbrk - program that looks for a string for any of a set byte
 * @s: Input character pointer
 * @accept: Input character pointer
 * Return: Null atring
 */
char *_strpbrk(char *s, char *accept)
{
	int alx = 0;

	while (*s)
	{
		for (alx = 0; accept[alx]; alx++)
		{
		if (*s == accept[alx])
		return (s);
		}
	s = s + 1;
	}
return ('\0');
}
