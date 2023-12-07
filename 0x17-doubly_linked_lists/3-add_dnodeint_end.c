#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at end of dlistint
 * @head: A pointer to the head of dlistint
 * @n: The integer to be held by new node inserted
 * Return: NULL or address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *elx, *end = *head;

	elx = malloc(sizeof(dlistint_t));
	if (elx == NULL)
		return (NULL);
	elx->n = n;
	elx->next = NULL;
	if (*head == NULL)
	{
		elx->prev = NULL;
		*head = elx;
		return (elx);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = elx;
	elx->prev = end;
	return (elx);
}
