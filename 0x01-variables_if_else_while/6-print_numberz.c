#include <stdio.h>
/**
 * main-prorams that prints single digits
 * using putchar
 * Return: Always (0) Success
 */
int main(void)
{
	int alx;

	for (alx = 0; alx <= 9; alx++)
{
	putchar(alx + 48);
}
	putchar('\n');
return (0);
}

