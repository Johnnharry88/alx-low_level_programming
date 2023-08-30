#include "main.h"
/**
 * _puts_recursion - program that prints strings
 * @s: character pointe
 * Return: (0)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
