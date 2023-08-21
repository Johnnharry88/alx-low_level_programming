#include "main.h"
/**
 * print_rev -program that prints a string in reverse
 * @s: string
 * Retuurn: (0)
 */
void print_rev(char *s)
{
	int prit = 0;
	int dis;

	while (*s != '\0')
	{
		prit++;
		s++;
	}
	s--;
	for (dis = prit; dis > 0; dis--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
)
