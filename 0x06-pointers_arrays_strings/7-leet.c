#include "main.h"
/**
 * leet -program that encodes in 1337
 * @n: Input value
 * Return: n
 */
char *leet(char *n)
{
	int alx, al;
	char s1[] = "aAeEoOtT";
	char s2[] = "4433007711";

	for (alx = 0; n[alx] != '\0'; alx++)
	{
		for (al = 0; al < 10; al++)
		{
			if (n[alx] == s1[al])
			{
				n[alx] = s2[al];
			}
		}
	}
return (n);
}
