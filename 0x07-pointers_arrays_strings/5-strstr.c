#include "main.h"
/**
 * _strstr - a program that loactes a string
 * @haystack: input pointer
 * @needle: input pointer
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *alx = haystack;
		char *school = needle;

		while (*alx == *school && *school != '\0')
		{
			alx = alx + 1;
			school = school + 1;
		}
		if (*school == '\0')
		return (haystack);
	haystack = haystack + 1;
	}
return (0);
}
