#include <stdio.h>
/**
 * main - Program that prints lowercase alphabets *
 * Return Always (0)Success
 */
int main(void)
{
	int ralp = 122;

	while (ralp >= 97)
	{
		putchar(ralp);
		ralp--;
	}
	putchar('\n');
return (0);
}
