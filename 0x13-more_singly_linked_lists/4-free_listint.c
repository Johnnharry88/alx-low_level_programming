#include "lists.h"
/**
 * free_listint - erases memory allocated to listint_t
 * @head: pointer to the first node of listint_s.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = (*head).next;
		free(head);
		head = hold;
	}
}
