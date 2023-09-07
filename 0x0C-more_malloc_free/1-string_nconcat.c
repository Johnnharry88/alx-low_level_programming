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
	unsigned int alx, sch, best;
	char *school;

	/*checking for Null*/
	if (s1 == NULL)
		alx = 0;
	else
	{
		for (alx = 0; s1[alx]; ++alx)
		{
			;
		}
	}
	if (s2 == NULL)
		sch = 0;
	else
	for (sch = 0; s2[sch]; ++sch)
	{
		;
	}
	if (sch > 0)
		sch = n;
	/* Assigning malloc */
	school = malloc(sizeof(char) * (alx * sch + 1));
	if (school == NULL)
	return (NULL);
	for (best = 0; best < alx; best++)
		school[best] = s1[best];
	for (best = 0; best < sch; best++)
	{
		school[best + alx] = s2[best];
	}
	school[alx + sch] = '\0';
	return (school);
}
