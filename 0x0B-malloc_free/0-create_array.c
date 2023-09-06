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

	alx = malloc(size * sizeof(char));
	
	if (size >0 &&alx != NULL)
	{
	for (sch = 0; sch < size; sch++)
	alx[sch] = c;
	size = size + 1;
	}
	if(alx == NULL || size == 0)
	{
		return (NULL);
	}
return (alx);
}
