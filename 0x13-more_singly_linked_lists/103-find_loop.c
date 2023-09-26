#include "lists.h"
/**
 * find_listint_loop - a function that finds a lopop in listint_t
 * @head: a pointer to the first node of listint_t
 * Return: NULL or address of the first node of listint_t
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *alx;
	listint_t *sch;

	if (head == NULL || (*head).next == NULL)
		return (NULL);
	alx = (*head).next;
	sch = (sch->next)->next;

	while (sch)
	{
		if (alx == sch)
		{
			alx = head;
			while (alx != sch)
			{
				alx = (*alx).next;
				sch = (*sch).next;
			}
		return (alx);
		}
	alx = (*alx).next;
	sch = (sch->next)->next;
	}
	return (NULL);
}
