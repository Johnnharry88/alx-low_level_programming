#include "function_pointers.h"
/**
 * print_name - program that prints a name to standard
 * uotput
 * @name: Pointer to character to be printed
 * f: Pointer to function that prints name
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		if (f)
		{
			f(name);
		}
	}
}
