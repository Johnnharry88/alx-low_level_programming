#include "lists.h"
/**
 * free_listint2 - frees memory allocated to listint_t
 * @head: double pointer to the firstnode of listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;
	while (*head)
	{
		if ((*head)->next)
		{
			hold = (*head)->next;
			free(*head);
			*head = hold;
		}
		else
		{
		free(*head);
		*head = NULL;
		}
	}
}
