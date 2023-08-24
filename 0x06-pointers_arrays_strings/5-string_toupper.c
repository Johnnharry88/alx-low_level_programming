#include "main.h"
/**
 * string_toupper -changes lower to uppercase
 * @n: pointer value
 * Return: n
 */
char *string_toupper(char *n)
{
	int alx = 0;

	for (alx = 0; n[alx] != '\0'; alx++)
	{
		if (n[alx] >= 'a' && n[alx] <= 'z')
		n[alx] = n[alx] - 32;
		alx++;
	}
return (n);
}
