#include "lists.h"
/**
 * pop_listint - rturns address of node at index number in listint_t
 * @head: pointer to first node of listint_t
 * Return: addres of node at the numbr of index  in listint_t
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	unsigned int rec;

	if (head == NULL)
		return (0);

	hold = *head;
	rec = (*head)->n;
	*head = (*head)->next;
	free(hold);
	return (rec);
}
