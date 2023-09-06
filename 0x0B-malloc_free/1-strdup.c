#include "main.h"
/**
 * _strdup -program that returns a pointer to a newly
 * allocated memory
 * @str: Character pointer
 * Return: NULL or String
 */
char *_strdup(char *str)
{
	int alx = 0, sch = 0;
	char *alpha;

	if (str == NULL)
	return (NULL);
	while (str[alx] != '0')
	alx++;
	alpha = malloc(sizeof(char) * (alx + 1));
	if (char *alpha == NULL)
		return (NULL);
	for (sch = 0; str[sch]; sch++)
	alpha[sch] = str[sch];
	return (pha);
}
