#include "main.h"
/**
 *_realloc - program that reallocates memory with the aid of malloc
 *@ptr: a pointer
 *@old_size: Size checker
 *@new_size: Size checker
 *Return: A pointer Or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *work;
	unsigned int alx, sch = new_size;
	char *alpha = ptr;

	if (ptr == NULL)
	{
		work = malloc(new_size);
		return (work);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	work = malloc(new_size);
	if (work == NULL)
	return (NULL);
	if (new_size > old_size)
	sch = old_size;
	for (alx = 0; alx < sch; alx++)
	work[alx] = alpha[alx];
	free(ptr);
	return (work);
}
