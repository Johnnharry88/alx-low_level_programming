#include "lists.h"
size_t unique_counter(const listint_t *head);

/**
 * unique_counter- couts the =number of ndes in listint_t
 * @head: a pointer to the first node of listint_t
 * Return: 0 or Number of nodes in listint_t
 */
size_t unique_counter(const listint_t *head)
{
	const listint_t *alx;
	const listint_t *sch;
	size_t rec = 1;

	if (head == NULL)
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
				rec = rec + 1;
				alx = (*alx).next;
			}
			return (rec);
		}
		alx = (*alx).next;
		sch = ((*sch).next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints listint_t
 * @head: pointer to first node of listint_t
 * Return: number of nodes in lsitint_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t points;
	size_t idx;

	points = unique_counter(head);
	if (points == 0)
	{
		for (; head != NULL; points++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = (*head).next;
		}
	}
	else
	{
		for (idx = 0; idx < points; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = (*head).next;
		}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (points);
}

