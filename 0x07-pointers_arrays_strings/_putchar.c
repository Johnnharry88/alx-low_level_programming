#include "main.h"
#include <unistd>
/**
 * _putchar - outputs c to standard output
 * @c: character to be displayed
 * Return: (1) Success
 * Error: (-1) Returned
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
