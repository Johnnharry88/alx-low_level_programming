#include "lists.h"
/**
 * adddnodeint - functiona that adds a new node at the begining of dlistint_t
 * @head: containing th ddress of the dlistint_t
 * @n: interger to be stored in the new node
 * Return: NULL or pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *elx;

	elx = malloc(sizeof(dlistint_t));
	if (elx == NULL)
		return (NULL);
	elx->prev = NULL;
	elx->n = n;
	elx->next = *head;
	if (*head != NULL)
		(*head)->prev = elx;
	*head = elx;
	return (elx);
}
