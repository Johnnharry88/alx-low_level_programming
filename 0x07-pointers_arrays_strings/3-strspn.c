#include "main.h"
/**
 *_strspn -program that prints gets the length of a substring prefix
 *@s: Input pinter s
 *@accept: Input pointer accept
 *Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int school = 0;
	int alx = 0;

	while (*s)
	{
		for (alx = 0; accept[alx]; alx++)
		{
			if (*s == accept[alx])
			{
				school = school + 1;
				break;
			}
			else if (accept[alx + 1] == '\0')
			{
				return (school);
			};
		}
		s = s + 1;
	}
return (0);
}
