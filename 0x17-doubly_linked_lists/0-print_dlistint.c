#include "lists.h"
/**
 * print_dlistint - function that prinnts elemets of dlistint_t
 * @h: pointer to the head of dlistint_t list.
 * Return: nuber of nodes in Doubly lined list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t alx;

	alx = 0;
	while (h)
	{
		alx = alx + 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (alx);
}
