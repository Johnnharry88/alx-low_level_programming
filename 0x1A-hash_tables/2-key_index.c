#include "hash_tables.h"
/**
 * key_index - function that returns the index at which key/value is to be
 * stored
 * @key: input key to obtain a corresponding index
 * @size: array size of hash table.
 * Return: Index Key
 */
unsigned long int key_index(const unsigned char *key, unsigned int size)
{
	return (hash_djb2(key) % size);
}
