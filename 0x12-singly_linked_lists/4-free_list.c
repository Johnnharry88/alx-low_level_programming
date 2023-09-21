#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a singly linked list.
 * @head: A pointer to list
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *ram;

	ram = head;
	while (head != NULL)
	{
		ram = head;
		head = head->next;
		free(ram->str);
		free(ram);
	}
	free(head);
}
