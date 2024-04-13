#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table
* @ht: hash table
*
*
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int z;
	hash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (z = 0; z < ht->size; z++)
	{
		node = ht->array[z];
		while (node != NULL)
		{
			if (flag == 1)
			printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
