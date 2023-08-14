#include <stdio.h>
/**
 * main displays alphabters in both lowewr
 * and uppercase respectively with a new line
 * Return: Always 0 (Success)
 */
int main(void)
{	int g;

	for (g = 'a'; g <= 'z'; g++)
		putchar(g);
	for (g = 'A'; g <= 'Z'; g++)
		putchar(g);
	putchar('\n');
return (0);
}
