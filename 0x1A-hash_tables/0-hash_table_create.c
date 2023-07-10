#include "hash_tables.h"
/**
 * hash_table_create - function to make  or create hash table.
 * @size: The size of the array
 * Return: NULL if the erro occured
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash;
	unsigned long int index;

	my_hash = malloc(sizeof(hash_table_t));
	if (my_hash == NULL)
		return (NULL);

	my_hash->size = size;
	my_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (my_hash->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		my_hash->array[index] = NULL;
	return (my_hash);
}
