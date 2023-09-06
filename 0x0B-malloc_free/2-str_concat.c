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
	int alpha = 0;
	int sch = 0;

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
	
	while (s1[alpha] != '\0')
	{
		alx[alpha] = s1[alpha];
		alpha += 1;
	}
	while (s2[sch] != '\0')
	{
		alx[alpha] = s2[sch];
		alpha = alpha + 1;
		sch = sch + 1;
	}
	alx[alpha] = '\0';
	return (alx);
}
