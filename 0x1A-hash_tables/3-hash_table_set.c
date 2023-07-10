#include "hash_tables.h"
/**
 * hash_table_set - function to add an element on the hash table
 * @ht: this is the hash tabke we are adding element to
 * @key: the key of the element we are adding
 * @value: this is the value of the element we are adding
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	char *c_value;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	c_value = strdup(value);
	if (c_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = c_value;
			return (1);
		}
	}

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(c_value);
		return (0);
	}
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	element->value = c_value;
	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}
