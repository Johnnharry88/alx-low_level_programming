#include "main.h"
/**
 * puts2 -program that prints new charater
 * beginning with a first one
 * @str:This is input string
 */
void puts2(char *str)
{
	int cos = 0;
	int alpha = 0;
	int beta;
	char *dir = str;

	while (*dir != '\0')
	{
		dir++;
		cos++;
	}
	alpha = cos - 1;
	for (beta = 0; beta <= alpha; beta++)
	{
		if (beta % 2 == 0)
		{
			_putchar(str[beta]);
		}
	}
	_putchar('\n');
}
