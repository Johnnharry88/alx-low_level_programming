#include "hash_tables.h"
/**
 * hash_table_print -function that prints hash table to the standard
 * output
 * @ht: holding address of hash table to print.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned char flag_comma = 0;
	unsigned long int x;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (flag_comma == 1)
				printf(", ");
			ptr = ht->array[x];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
			flag_comma = 1;
		}
	}
	printf("}\n");
}
