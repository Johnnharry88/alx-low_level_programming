#include "lists.h"
/**
 * delete_nodeint_at_index -function that deletes node at a given indes
 * @head: pointer to addres of the first node of listint_t
 * @index: index of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold;
	listint_t *dup = *head;
	unsigned int point = 0;

	if (dup == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}
	while (point < (index - 1))
	{
		if ((*dup).next == NULL)
			return (-1);
		dup = (*dup).next;
		point = point + 1;
	}
	hold = (*dup).next;
	(*dup).next = (*hold).next;
	free(hold);
	return (1);
}
