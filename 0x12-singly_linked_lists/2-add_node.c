#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a
 * linked
 * @head: A pointer to a linked list.
 * @str: pointer to a linked list.
 * Return: Address of linked list or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	size_t size = 0;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
	{
		return (NULL);
	}
	while (str[size])
		size++;
	fresh->len = size;
	fresh->str = strdup(str);
	fresh->next = *head;
	*head = fresh;
	return (fresh);
}
