#include "hash_tables.h"
/**
 * hash_table_get - function that gets a value associated
 * with a key from a hash table
 * @ht: holding the address of the hash table
 * @key: the key paired with a value
 * Return: value associate with key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *alx;
	unsigned long int count;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	count = key_index((const unsigned char *)key, ht->size);
	if (count >= ht->size)
		return (NULL);

	alx = ht->array[count];
	while (alx && strcmp(alx->key, key) != 0)
		alx = alx->next;

	return ((alx == NULL) ? NULL : alx->value);
}
