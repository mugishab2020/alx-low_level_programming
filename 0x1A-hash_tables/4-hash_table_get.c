#include "hash_tables.h"
/**
 * hash_table_get - function to retreave the values associated with a key in hash table
 * @ht: the hash table we are retreaving
 * @key: the key to retreave
 * Return: 1 for true or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);

	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}
