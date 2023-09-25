#include "lists.h"
/**
 * add_nodeint- function that adds a new nodea the begining of listint_t
 * @head:a doube pointer to the first node of listintint
 * @n: integer holding the number of new listint_s
 * Return: NULL of address of mewly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh)
	{
		(*fresh).n = n;
		(*fresh).next = *head;
		*head = fresh;
	return (fresh);
	}
	else
		return (NULL);
}
