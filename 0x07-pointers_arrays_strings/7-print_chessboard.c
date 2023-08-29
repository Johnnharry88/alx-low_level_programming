#include "main.h"
/**
 * print_chessboard -program that prints chessboard
 * @a: Array of eight elements
 * Return: (0) Success
 */
void print_chessboard(char (*a)[8])
{
	int alx = 0, school = 0;

	while (alx <= 7)
	{
		while (school <= 7)
		{
			_putchar(a[alx][school]);
			_putchar('\n');
			school = school + 1;
		}
	alx = alx + 1;
	}
}
