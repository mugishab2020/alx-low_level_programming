#include "hash_tables.h"
/**
 * hash_table_delete - fucntion to delete a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
}
