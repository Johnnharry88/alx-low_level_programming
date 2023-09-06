#include "main.h"
/**
 * create_array - function that creates an array of character
 * @size: Integer data type holding size of array
 * @c: Character string
 * Return: NULL or Array pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int sch;
	char *alx;

	alx = (char)malloc(size * sizeof(char));
	if (size != 0 || alx != NULL)
	{
		for (sch = 0; sch < size; sch++)
		alx[sch] = c;
		return (alx);
	}
	else
	{
		return (NULL);
	}
}
