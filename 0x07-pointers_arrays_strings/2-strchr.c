#include "main.h"
/**
 * _strchr - progran that looks for a character in a string
 * @s: Input string pointer
 * @c: input character
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int alx = 0;

	while (s[alx] >= '\0')
	{
		if (s[alx] == c)
		{
			return (&s[alx]);
		}
	alx = (alx + 1);
	}
return (0);
}
