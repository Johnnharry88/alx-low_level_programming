#include "main.h"
/**
 * _calloc - program that allocates memory to an array
 * @nmemb: integer Input
 * @size: Integer input
 * Return: NULL or Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alpha;
	unsigned int alx;

	/*checking for Null condition*/
	if (nmemb == 0 || size == 0)
	return (NULL);
	else
	{
		alpha = malloc(nmemb * size);
		if (alpha == NULL)
		return (NULL);
		for (alx = 0;  alx < (nmemb * size); alx++)
		{
			alpha[alx] = 0;
		}
		return (alpha);
	}
}
