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

	/*checking for Null*/
	if (s1 == NULL)
		alx1 = 0;
	while (s1 != NULL && s1[alx1])
	{
		alx1++;
	}
	if (s2 == NULL)
		alx2 = 0;
	while (s2 != NULL && s2[alx2])
	{
		alx2 = alx2 + 1;
	}
	if (n < alx2)
	school = malloc(sizeof(char) * (alx1 + 1 + n));
	else
	school = malloc(sizeof(char) * (alx1 + alx2 + 1));
	if (!school)
	return (NULL);
	for (sch = 0; sch < alx1; sch++)
		school[sch] = s1[sch];
	while (n < alx2 && sch < (alx1 + n))
		school[sch++] = s2[best++];
	while (n >= alx2 && sch < (alx1 + alx2))
		school[sch++] = s2[best++];
	school[sch++] = '\0';
	return (school);
}
