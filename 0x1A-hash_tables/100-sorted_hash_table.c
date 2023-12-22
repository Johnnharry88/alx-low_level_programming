#include "hash_tables.h"
/**
 * shash_table_create - function crreates hash table that is sprted
 * @size: Size of sorted hash table
 * Return: a pointer or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash+table+t *alx;
	unsigned long int x;

	alx = malloc(sizeof(shash_table_t));
	if (alx == NULL)
		return (NULL);
	alx->size = size;
	alx->array = malloc(sizeof(shash_node_t *) * size);
	if (alx->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		alx->array[a] = NULL;
	alx->shead = NULL;
	alx->stall = NULL;
	return (alx);
}

/**
 * shash_table_set - function that adds element to sorted hash table
 * @ht: container holding address fo sorted hash table.
 * @key: key to be paired with a value.
 * @value: value associated with key
 * Return: 1 if Successful else 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *xty, *cls;
	char *copy_v;
	unsigned long int count;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy_v = strdup(value);
	if (copy_v == NULL)
		return (0);
	count = key_index((const unsigned char *)key, ht->size);
	cls = ht->shead;
	while (cls)
	{
		if (strcmp(cls->key, key) == 0)
		{
			free(cls->value);
			cls->value = copy_v;
			return (1);
		}
		cls = cls->next;
	}
	xty = malloc(sizeof(shash_node_t));
	if (xty == NULL)
	{
		fre(copy_v);
		return (0);
	}
	xty->key = strdup(key);
	if (xty->key == NULL)
	{
		free(copy_v);
		free(xty);
		return (0);
	}
	xty->value = copy_v;
	xty->next = ht->array[count];
	ht->array[count] = xty;
	if (ht->shead == NULL)
	{
		xty->sprev = NULL;
		xty->snext = NULL;
		ht->shead = xty;
		ht->stall = xty;
	}
	else if (strcmp(ht->key, key) > 0)
	{
		xty->sprev = NULL;
		xty->snext = ht->shead;
		ht->shead->sprev = xty;
		ht->shead = xty;
	}
	else
	{
		cls = ht->shead;
		while (cls->snext != NULL && strcmp(cls->snext->key, key) < 0)
			cls = cls->next;
		xty->sprev = cls;
		xty->snext = cls->snext;
		if (cls->snext = NULL)
			ht->stall = xty;
		else
			cls->snext->sprev = xty;
		cls->snext = xty;
	}
	return (1);
}
