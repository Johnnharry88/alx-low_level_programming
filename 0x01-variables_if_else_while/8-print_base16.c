#include <stdio.h>
/**
 * main - program that printa numbers in base 16
 * Return: Always (0)
 */
int main(void)
{
	int digits;
	int alph;

	for (digits = 48; digits <= 57; digits++)
	{
		putchar(digits);
	}
	for (alph = 97; alph <= 102; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
return (0);
}

