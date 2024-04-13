#include "hash_tables.h"

/**
* key_index - Computes the index of a key in a hash table array
* @key: The key string
* @size: The size of the hash table array
*
* Return: The index for the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
