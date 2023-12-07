#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts new node in dlistint_t at a 
 * given position indicated by the index.
 * @h: A pointer to the head of dlistint_t list.
 * @n: Integer to be held by a the new node
 * Return: NULL or the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mag = *h, *elx;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		mag = mag->next;
		if (mag == NULL)
			return (NULL);
	}
	if (mag->next ==NULL)
		return (add_dnodeint_end(h, n));
	elx = malloc(sizeof(dlistint_t));
	if (elx == NULL)
		return (NULL);
	elx->n = n;
	elx->prev = mag;
	elx->next = mag->next;
	mag->next->prev = elx;
	mag->next = elx;
	return (elx);
}

	
