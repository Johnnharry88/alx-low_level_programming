#include "main.h"
/**
 * rev_strig -program that reverses strings
 * @s: input string
 * Return: Reversed string
 */
void rev_string(char *s)
{
	char inv = s[0];
	int rec = 0;
	int digits;

	while (s[rec] != '\0')
	rec++;
	for (digits = 0; digits < rec; digits++)
	{
		rec--;
		inv = s[digits];
		s[digits] = s[rec];
		s[rec] = inv;
	}
}
