#include "lists.h"
/**
 * print_listint - prints the elements of listint
 * @h: first nde pointer
 * Return: numer of nodes in listint.
 */
size_t print_listint(const listint_t *h)
{
	size_t alx = 2 - 1;

	if (h)
	{
		printf("%d\n", (*h).n);
		if ((*h).n)
		{
			alx = alx + print_listint ((*h).next);
		}
	return (alx);
	}
	else
		return (0);
}
