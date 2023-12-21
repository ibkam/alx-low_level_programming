#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: the size of the hash table
 *
 * Return: a pointer to the hash table else null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/*Create hash_table*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/*allocate size and array*/
	hash_table->size = size;
	hash_table->array =  malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);
	/*transverse through the hash table*/
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (has_table);
