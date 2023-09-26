#include "lists.h"
/**
 * get_nodeint_at_index- function that finds agiven node of listint_t
 * @head: a pointer to the firs node of listint_t
 * @index: integer holding the address of node
 * Return: NULL or the head at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int address = 0;

	while (address < index)
	{
		if (head == NULL)
			return (NULL);
		head = (*head).next;
		address += 1;
	}
	return (head);
}
