#include "main.h"
/**
* _strcmp -program that compares the values of two input string
* @s1: input string 1
* @s2: input string 2
* Return: s1[alx] - s2[alx]
*/
int _strcmp(char *s1, char *s2)
{
	int alx = 0;

	for (alx = 0; s1[alx] != '\0' && s2[alx] != '\0'; alx++)
	{
		if (s1[alx] != s2[alx])
		{
			return (s1[alx] - s2[alx]);
		}
	}
return (0);
}
