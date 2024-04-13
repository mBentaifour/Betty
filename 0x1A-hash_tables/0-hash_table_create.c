#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int k;

	if (size == 0)
	return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		hash_table->array[k] = NULL;
	}

	return (hash_table);
}
