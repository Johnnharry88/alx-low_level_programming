#include "lists.h"
/**
 * listint_len - function that counts all elements of listint
 * @h: points to the first node of lisint
 * Return: Number of nodes in listint or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t alx = 0;

	while (h != NULL)
	{
		h = h->next;
		alx = alx + 1;
	}
	return (alx);
}
