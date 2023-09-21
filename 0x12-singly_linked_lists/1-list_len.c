#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - funtion that gives out the number of
 * elements in a listed link
 * @h: a pointer to single link list
 * Return: No of elements
 */
size_t list_len(const list_t *h)
{
	size_t alx;

	for (alx = 0; h != NULL; alx++)
	{
		h = h->next;
	}
	return (alx);
}
