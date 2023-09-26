#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in listint_t
 * @head: a pointer to the first node of listint_t.
 * Return: NULL or address of node loped
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *alx;
	listint_t *sch;

	if (head = NULL)
		return (NULL);
	if (head->next == NULL)
		return (NULL);
	alx = head->next;
	sch = (head->next)->next;
	while (sch)
	{
		if (alx == sch)
		{
			alx = head;
			while (alx != sch)
			{
				alx = (*alx).next;
				sch = sch->next;
			}
			return (alx);
		}
		alx = alx->next;
		sch = (sch->next)->next;
	}
	return (NULL);
}
