#include "main.h"
/**
 * print_chessboard -program that prints chessboard
 * @a: Array of eight elements
 * Return: (0) Success
 */
void print_chessboard(char (*a)[8])
{
	int alx, school = 0;

	for (alx = 0; alx < 8; alx++)
	{
		while (school < 8)
		{
			_putchar(a[alx][school]);
		school += 1;
		}
	_putchar('\n')
	}
}
