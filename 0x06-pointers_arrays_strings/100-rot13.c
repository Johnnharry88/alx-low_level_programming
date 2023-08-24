#include "main.h"
/**
 * rot13 -program that codes alphabets
 * @a: parameter pointer
 * Return: a
 */
char *rot13(char *a)
{
	int alx, al;
	char hold[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char hold1[] = "NOPQRSTVUWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (alx = 0; a[alx] != '\0'; alx++)
	{
		for (al = 0; al < 52; al++)
		{
			if (a[alx] == hold[al])
			{
				a[alx] = hold1[al];
			}
			break;
		}
	}
return (a);
}
