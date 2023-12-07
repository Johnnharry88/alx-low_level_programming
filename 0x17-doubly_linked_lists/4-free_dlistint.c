#include "lists.h"
/**
 * free_dlistint - function that clears dlistint_t
 * @head: A pointer to the head of dilistint_t list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cls;

	while (head)
	{
		cls = head->next;
		free(head);
		head = cls;
	}
}
