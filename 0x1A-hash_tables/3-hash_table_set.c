#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table to
 * @ht: the hash table you want to add or update the value
 * @key: the key
 * @value: the value
 * Return: 1 or 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = key_index(key, ht->size);
	
	if (strlen(key) < 1)
		return (0);
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = key;
	strcpy(node->value, value);
	node->next = NULL;
	/* add the node to the slot if it is empty */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}/* if the slot is occupied and the keys are alike, replace the value. */
	else if ((ht->array[index] != NULL) && (ht->array[index]->key == key))
		strcpy(ht->array[index]->value, value);
	/* if the slot is occupied and its next is null */
	else if ((ht->array[index] != NULL) && (ht->array[index]->next == NULL))
		ht->array[index]->next = node;
	/* if the slot is occupied and its next is not null */
/*	else if ((ht->array[index] != NULL) && (ht->array[index]->next != NULL))
*/
	return (1);
}
