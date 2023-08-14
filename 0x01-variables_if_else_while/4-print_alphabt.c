#include <stdio.h>
/**
 * main-program to print lowercase alphabets
 * excluding 'e' and 'q'
 * Return: Always 0 (Success)
 */
int main(void)
{	char alpha = 'a';
	while (alpha <= 'z')
{
	if (alpha != 'e' && alpha != 'q')
{	putchar(alpha);
}
	alpha++;
}
	putchar('\n');
return (0);
}
