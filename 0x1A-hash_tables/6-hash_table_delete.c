#include "hash_tables.h"

/**
* hash_table_delete - Deletes hash table
* @ht: hash table to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int y;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (y = 0; y < ht->size; y++)
	{
		node = ht->array[y];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
