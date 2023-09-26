#include "lists.h"
/**
 * add_nodeint_end - places a new node at then end of listint_t.
 * @head: A double pointer to the first node of listint_t
 * @n: integer to hold new member of lsintint_t
 * Return: address of new wlement or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *lastnode;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	(*fresh).n = n;
	(*fresh).next = NULL;
	if (*head == NULL)
		*head = fresh;
	else
	{
		lastnode = *head;
		while ((*lastnode).next != NULL)
			lastnode = (*lastnode).next;
		(*lastnode).next = fresh;
	}
return (fresh);
}
