#include "lists.h"
/**
 * dlistint_len - function that returns number of element in dlistint_t
 * @h: pointer to the head of the dlistint_t list
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t alx;

	alx = 0;
	while (h)
	{
		h = h->next;
		alx = alx + 1;
	}
	return (alx);
}
