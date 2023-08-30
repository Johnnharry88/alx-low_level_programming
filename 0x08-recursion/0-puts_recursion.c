#include "main.h"
/**
 * _puts_recursion - program that prints strings
 * @s: character pointe
 * Return: (0)
 */
void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_putchar(s);
	}
	_putchar('\n');
return (0);
}
