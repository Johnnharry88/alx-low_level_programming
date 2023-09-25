#include "lists.h"
/**
 * add_nodeint_nd - places a new node at then end of listint_t.
 * @head: A double pointer to the first node of listint_t
 * @n: integer to hold new member of lsintint_t
 * Return: address of new wlement or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *lastnode = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
	{
		free(fresh);
		return (NULL);
	}
	(*fresh).n = n;
	(*fresh).next = NULL;
	if (!head)
		*head = fresh;
	else
	{
		while ((*lastnode).next)
			lastnode = (*lastnode).next;
		(*lastnode).next = fresh;
	}
return (fresh);
}
