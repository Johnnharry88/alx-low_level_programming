#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all possible
 * combination of single digite
 * Return: (0) Succes
 */
int main(void)
{
	int alx = 0;

	while (alx <= 9)
	{
		putchar(48 + alx);
		if (alx != 9)
		{
			putchar(',');
			putchar (' ');
		}
	alx = alx + 1;
	}
	putchar('\n');
return (0);
}
