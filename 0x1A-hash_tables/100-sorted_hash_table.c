#include "hash_tables.h"
/**
 * shash_table_create - function crreates hash table that is sprted
 * @size: Size of sorted hash table
 * Return: a pointer or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *alx;
	unsigned long int a;

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
	alx->stail = NULL;
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
		cls = cls->snext;
	}
	xty = malloc(sizeof(shash_node_t));
	if (xty == NULL)
	{
		free(copy_v);
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
		ht->stail = xty;
	}
	else if (strcmp(ht->shead->key, key) > 0)
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
		if (cls->snext == NULL)
			ht->stail = xty;
		else
			cls->snext->sprev = xty;
		cls->snext = xty;
	}
	return (1);
}

/**
 * shash_table_get - function that obtains that value assoicated with
 * a key in sorted hash
 * @ht: container holding addrsess of hash table
 * @key: the key associated with the value
 * Return: NULL otherwise value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int count;
	shash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	count = key_index((const unsigned char *)key, ht->size);
	if (count >= ht->size)
		return (NULL);
	ptr = ht->shead;
	while (ptr != NULL && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;
	return ((ptr != NULL) ? ptr->value : NULL);
}

/**
 * shash_table_print - function prints out sorted hash table to standard
 * output
 * @ht: container holding address of hash table
 * Return: void.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;
	ptr = ht->shead;
	printf("{");
	while (ptr != NULL)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		if (ptr != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a soeted hash table
 * @ht: container holding the address of the hash table
 * Return: Void.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *xty, *tmp;

	if (ht == NULL)
		return;
	xty = ht->shead;
	while (xty)
	{
		tmp = xty->snext;
		free(xty->key);
		free(xty->value);
		free(xty);
		xty = tmp;
	}
	free(head->array);
	free(head);
}

/**
 * shash_table_print_rev - function that reverses anr prints out a hash table
 * to the standard otput
 * @ht: container holding address to the hash table
 * Return: void.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *xty;

	if (ht == NULL)
		return;

	xty = ht->stail;
	printf("{");
	while (xty != NULL)
	{
		printf("'%s': '%s'", xty->key, xty->value);
		xty = xty->sprev;
		if (xty != NULL)
			printf(". ");
	}
	printf("}\n");
}
