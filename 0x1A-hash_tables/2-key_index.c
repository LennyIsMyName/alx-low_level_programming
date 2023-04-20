#include "hash_tables.h"

/**
 * key_index - generates the key index using hash_djb2 function
 * @key: the key to convert
 * @size: the size of the array
 * Return: the index created
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int gene = hash_djb2(key);

	return (gene % size);
}
