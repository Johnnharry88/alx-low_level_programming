#include "lists.h"
/**
 * reverse_listint - reverses listint_t
 * @head: pointer to address of the first node of listint_t
 * Return: A pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front;
	listint_t *back;

	if (head == NULL)
		return (NULL);
	if (*head  == NULL)
		return (NULL);
	back = NULL;
	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = front;
	}
	(*head)->next = back;
	return (*head);
}
