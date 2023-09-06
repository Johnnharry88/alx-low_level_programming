#include "main.h"
/**
 * str_concat -program that concatnenates two strings
 * @s1: String one character pointer
 * @s2: String two character pointer
 * Return: NULL or alx
 */
char *str_concat(char *s1, char *s2)
{
	char *alx;
	int alpha = 0, a = 0;
	int sch = 0, s = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[alpha] != '\0')
	{
		alpha = alpha + 1;
	}
	while (s2[sch] != '\0')
	{
		sch = sch + 1;
	}
	alx = malloc(1 + (alpha + sch) * sizeof(char));
	if (alx == NULL)
	{
	return (NULL);
	}

	while (s1[a] != '\0')
	{
		alx[a] = s1[a];
		a += 1;
	}
	while (s2[s] != '\0')
	{
		alx[a] = s2[s];
		a = a + 1;
		s = s + 1;
	}
	alx[a] = '\0';
	return (alx);
}
