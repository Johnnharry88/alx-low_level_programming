#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: holding address to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *ptr, *cls;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			ptr = ht->array[a];
			while (ptr != NULL)
			{
				cls = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = cls;
			}
		}
	}
	free(head->array);
	free(head);
}
