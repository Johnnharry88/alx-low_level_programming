#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - program that prints elements of a list to
 * the standard output
 * @h: list pointer.
 * Return: list or Null
 */
size_t print_list(const list_t *h)
{
	size_t rec;

	for (rec = 0; h != NULL; rec++)
	{
		if ((*h).str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	h = h->next;
	}
	return (rec);
}
