#include <stdio.h>
/**
*main-displays all lower case alphabets followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
	putchar(x);
}
	putchar('\n');
return (0);
}
