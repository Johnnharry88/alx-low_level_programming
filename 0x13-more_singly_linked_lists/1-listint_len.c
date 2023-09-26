#include "lists.h"
/**
 * listint_len - function that counts all elements of listint
 * @h: points to the first node of lisint
 * Return: Number of nodes in listint or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t alx = 0;

	if (h && ((*h).next))
		alx = alx + listint_len((*h).next);
	return (alx);
}
