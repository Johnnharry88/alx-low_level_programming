#include "lists.h"
/**
 * sum_listint - utputs the result of ths sum of all data in listint_t
 * @head: points to the first node of listint_t
 * Return: 0 or sum of the listint_t
 */
int sum_listint(listint_t *head)
{
	int alx = 0;

	while (head)
	{
		alx = alx + (*head).n;
		head  = (*head).next;
	}
return (alx);
}
