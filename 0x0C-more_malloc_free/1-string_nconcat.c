#include "main.h"
/**
 * string_nconcat - cocatenatestwo strings
 * @s1: string one
 * @s2: string two
 * @n: Integer checker
 * Return: NULL or Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int alx1, alx2, sch, best;
	char *school;

	if (s1 == NULL)
		alx1 = 0;
	while (s1 && s1[alx1])
		alx1++;
	if (s2 == NULL)
		alx2 = 0;
	while (s2 && s2[alx2])
	{
		alx2 = alx2 + 1;
	}
	if (n < alx2)
		school = malloc(sizeof(char) * (alx1 + 1 + n));
	else
		school = malloc(sizeof(char) * (alx1 + alx2 + 1));
	if (!school)
		return ("");
	while (sch < alx1)
	{
		school[sch] = s1[sch];
		sch = sch + 1;
	}
	while (n < alx2 && sch < (alx1 + n))
		school[sch++] = s2[best++];
	while (n >= alx2 && sch < (alx1 + alx2))
		school[sch++] = s2[best++];
	school[sch++] = '\0';
return (school);
_putchar('\n');
}
