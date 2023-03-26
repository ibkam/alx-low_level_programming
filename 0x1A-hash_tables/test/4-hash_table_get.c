#include "hash_tables.h"
/**
 * hash_table_get- function that retrieves a value associated with a key
 * @ht: A pointer to the hash table
 * @key: the key associate with the value
 *
 * Return: the value or NULL if key couldnt be found
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *node;
	unsigned long int index;

	/*if hash table or key is equal to Null*/
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/*intializing index to take key and hash table size*/
	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);

	/*intializing node to hash table array at index*/
	node = ht->array[index];

	/*while node key & key is not equal to null string copy to node*/
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	/*check if node equals to null is null then return value*/
	return ((node == NULL) ? NULL : node->value);
}
