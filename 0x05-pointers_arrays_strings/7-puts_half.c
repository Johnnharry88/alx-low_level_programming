#include "main.h"
/**
 * puts_half - program that prints half of a string
 * @str: input string
 * Return: Zero
 */
void puts_half(char *str)
{
	int alx;

	for (alx = 0; str[alx] != '\0'; alx++)
	alx++;
	for (alx /= 2; str[alx] != '\0'; alx++)
	{
		_putchar(str[alx]);
	}
	_putchar('\n');
}
