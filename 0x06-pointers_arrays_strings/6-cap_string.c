#include "main.h"
/**
 * cap_string -program returns capital letters for input string
 * @str: Input string
 * Return: str
 */
char *cap_string(char *str)
{
	int alx;

	alx = 0;

	while (str[alx])
	{
		while (!(str[alx] >= 'a' && str[alx] <= 'z'))
		alx++;
		if (alx == 0 ||
		str[alx - 1] == '\n' ||
		str[alx - 1] == '\t' ||
		str[alx - 1] == '?' ||
		str[alx - 1] == '(' ||
		str[alx - 1] == ')' ||
		str[alx - 1] == '}' ||
		str[alx - 1] == '{' ||
		str[alx - 1] == ',' ||
		str[alx - 1] == '!' ||
		str[alx - 1] == ';' ||
		str[alx - 1] == '.' ||
		str[alx - 1] == ' ' ||
		str[alx - 1] == '"')
			str[alx] -= 32;

	alx++;
	}
return (str);
}
