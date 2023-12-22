#include "hash_tables.h"
/**
 * hash_table_set - function that adds elements to a hash table
 * @ht: Holding the address of a hash table
 * @key: The key to be added.
 * @value: value paired with the key
 * Return: 1 on Success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr;
	char *copy_v;
	unsigned long int count, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy_v = strdup(value);
	if (copy_v == NULL)
		return (0);
	count = key_index((const unsigned char *)key, ht->size);
	for (x = count; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = copy_v;
			return (1);
		}
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		free(copy_v);
		return (0);
	}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (0);
	}
	ptr->value = copy_v;
	ptr->next = ht->array[count];
	ht->array[count] = ptr;
	return (1);
}
