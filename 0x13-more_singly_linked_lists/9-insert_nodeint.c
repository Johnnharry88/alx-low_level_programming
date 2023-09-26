#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts a new node in listint_t
 * at a given position of n
 * @head: pointer to address of lsitint_t
 * @idx: index where new node will be inserted
 * @n: integer for newly inserted node
 * Return: NULL or address of new node inserted.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fresh;
	listint_t *dup = *head;
	unsigned int alx = 0;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	(*fresh).n = n;
	if (idx == 0)
	{
		(*fresh).next = dup;
		*head = fresh;
		return (fresh);
	}
	while (alx < (idx - 1))
	{
		if (dup == NULL)
			return (NULL);
		if ((*dup).next == NULL)
			return (NULL);
		dup = (*dup).next;
	alx = alx + 1;
	}
	(*fresh).next = (*dup).next;
	(*dup).next = fresh;
	return (fresh);
}
