#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes node from a dlistint
 * at a givien index.
 * @head: a pointer to the had of dlistint_t.
 * @index: container holding the number at node index
 * Return: -1 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cls = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (cls == NULL)
			return (-1);
		cls = cls->next;
	}
	if (cls == *head)
	{
		*head = cls->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		cls->prev->next = cls->next;
		if (cls->next != NULL)
			cls->next->prev = cls->prev;
	}
	free(cls);
	return (1);
}
