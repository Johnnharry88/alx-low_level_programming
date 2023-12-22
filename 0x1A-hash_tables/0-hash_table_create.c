#include "hash_tables.h"

/**
 * hash_table_create - function that returns a new hash table
 * @size: Size of array to be used
 * Return: NULL else a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;
	hash_table_t *xty;

	xty = malloc(sizeof(hash_table_t));
	if (xty == NULL)
		return (NULL);
	xty->size = size;
	xty->array = malloc(sizeof(hash_node_t *) * size);
	if (xty->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		xty->array[x] = NULL;
	return (xty);
}
