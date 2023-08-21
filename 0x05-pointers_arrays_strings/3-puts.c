#include "main.h"
/**
 * _puts -outputs a string ona standard output
 * and a new line
 * @str: vlaue to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
