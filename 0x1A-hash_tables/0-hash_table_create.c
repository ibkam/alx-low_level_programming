#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: thr size of the hash table
 *
 * Return: a pointer to the hash table else Null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*declare a variable*/
	hash_table_t *hash_table;
	unsigned long int i;

	/*assign mallock of hash_table_t*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/*assign size $ array of hash_table_t*/
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}
