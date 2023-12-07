#include "lists.h"
/**
 * sum_dlistint - function that sums up the data of dlistintIt list
 * @head: A pointer to the head of dlistint_t list.
 * Return: Sums of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *elx;

	for (elx = head; elx != NULL; elx = elx->next)
	{
		res = res + elx->n;
	}
	return (res)
}
