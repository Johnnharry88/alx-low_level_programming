#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that attaches a new node at
 *  the end of a singly list
 *  @str: pointer to list
 *  @head: pointer to list
 *  Return: address of list or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh, *end;
	size_t size = 0;

	fresh = malloc(sizeof(list_t));
	while (str[size])
		size = size + 1;
	fresh->len = size;
	fresh->str = strdup(str);
	if (*head == NULL)
	{
		fresh->next = *head;
		*head = fresh;
	}
	else
	{
		fresh->next = NULL;
		end = *head;
		while (end->next)
			end = end->next;
		end->next = fresh;
	}
	return (fresh);
}
