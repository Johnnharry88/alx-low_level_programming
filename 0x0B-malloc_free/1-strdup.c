#include "main.h"
/**
 * _strdup -program that returns a pointer to a newly
 * allocated memory
 * @str: Character pointer
 * Return: NULL or String
 */
char *_strdup(char *str)
{
	int alx = 0, sch;
	char *alpha;

	if (str == NULL)
	return (NULL);

	while (str[alx] != '\0')
	{
		alx = alx + 1;
	}

	alpha = malloc((sizeof(char) * alx) + 1);

	for (sch = 0; str[sch] != '\0'; sch++)
	{
		alpha[sch] = str[sch];
	}
	alpha[sch] = '\0';
return (alpha);
}
