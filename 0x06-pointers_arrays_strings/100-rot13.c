#include "main.h"
/**
 * rot13 -programs that encodes alphabets
 * @s: string parameter pointer
 *Return: s
 */
char *rot13(char *)
{
	int alx, al;
	char hold1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	char hold2[] = "NOPQRSTUVWXYZABCDEFGHIJLKMnopqrstuvwxyzabcdefghijklm"

	for (alx = 0; s[alx] != '\0'; alx++)
	{
		for (al = 0; al <= 52; al++)
		{
			if (s[alx] == hold1[alx])
			{
				s[alx] = hold2[al];
			}
			break';
		}
	}
return (s);
}
