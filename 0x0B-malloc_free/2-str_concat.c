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
	int alpha;
	int sch;

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
		school = school + 1;
	}
	alx = malloc((alpha + sch + 1) * sizeof(char));
	if (alx == NULL)
	{
		return (NULL);
	}
	alpha = 0;
	sch = 0;
	while (s1[alpha] !- '\0')
	{
		alx[alpha] = s[alpha]
	alpha += 1
	}
	while (s2[sch] != '\0')
	{
		alx[alpha] = s2[sch]
		alpha = alpha + 1;
		school = school + 1;
	}
	alx[alpha] = '\0';
	return (alx);
}
