#include "main.h"
/**
 * _putchar- A function that outputs character to standard output
 * @c: character to be displayed.
 * Return: the byts of the character to be printed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
