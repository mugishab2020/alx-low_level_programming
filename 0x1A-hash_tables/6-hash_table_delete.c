#include "hash_tables.h"
/**
 * hash_table_delete - fucntion to delete a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempo, *node;
	hash_table_t *head = ht;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			while (node != NULL)
			{
				tempo = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tempo;
			}
		}
	}
	free(head->array);
	free(head);
}
