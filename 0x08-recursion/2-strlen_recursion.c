#include "main.h"
/**
 * _strlen_recursion -program that outputs the length of a string
 * @s: Character pointer
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int lnt;

	lnt = 0;
	if (*s)
	{
		lnt = lnt + 1;
		lnt = lnt + (_strlen_recursion(s + 1));
	}
return (lnt);
}
