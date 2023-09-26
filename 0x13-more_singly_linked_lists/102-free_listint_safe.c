#include "lists.h"
size_t unique_counter(listint_t *head);
/**
 * unique_counter - counts the number of nodes in a listint_t.
 * @head: pointer to first node of listint_t.
 * Return: 0 or number of nodes in listint_t
 */
size_t unique_counter(listint_t *head)
{
	listint_t *alx;
	listint_t *sch;
	size_t rec = 1;

	if (head == NULL)
		return (0);
	if ((*head).next == NULL)
		return (0);
	alx = (*head).next;
	sch = ((*head).next)->next;

	while (sch)
	{
		if (alx == sch)
		{
			alx = head;
			while (alx != sch)
			{
				rec = rec + 1;
				alx = (*alx).next;
				sch = (*sch).next;
			}
			alx = (*alx).next;
			while (alx != sch)
			{
				rec += 1;
				alx = (*alx).next;
			}
		return (rec);
		}
		alx = (*alx).next;
		sch = (sch->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - free listint_t.
 * @h: pointer to address of first node
 * Return: size of listint_t
 */
size_t free_listint_safe(listint_t *h)
{
	listint_t *hold;
	size_t rec;
	size_t idx;

	idx = unique_counter(*h);
	if (idx == 0)
	{
		for (idx = 0; h != NULL && *h != NULL; idx++)
		{
			hold = (*h)->next;
			free(*h);
			*h = hold;
		}
	}
	else
	{
		while (rec < idx)
		{
			hold = (*h)->next;
			free(*h);
			*h = hold;
		rec += 1;
		}
		*h = NULL;
	}
	return (rec);
}
