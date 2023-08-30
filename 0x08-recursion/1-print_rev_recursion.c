#include "main.h"
/**
 * _print_rev_recursion -program that prints strings in reversed order
 * @s: Character pointer
 * Return: (0)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
return (0);
}
