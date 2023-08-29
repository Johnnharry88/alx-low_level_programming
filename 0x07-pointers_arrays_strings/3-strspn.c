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
		while (accept[school])
		{
			if (*s == accept[alx])
			{
				alx = alx + 1;
				break;
			}
			else if (accept[alx + 1] == '\0')
			{
				return (n);
			}
		alx = alx + 1;
		}
		s = s + 1;
	}
return (n);
}
