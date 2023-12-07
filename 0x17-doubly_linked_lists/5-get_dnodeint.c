#include "lists.h"
/**
 * get_dnodeint_at_index - functions that locates node in a dlistint_t list.
 * @head: A pointer to the head of dlistint_t list.
 * @index: the number of the node to be located.
 * Return: NULL or pointer to located node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *elx = head;
	unsigned int x = 0;

	while (elx != NULL)
	{
		if (x == index)
			return (elx);
		elx = elx->next;
		x = x + 1;
	}
	return (NULL);
}
