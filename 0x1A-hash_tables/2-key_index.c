#include "hash_tables.h"
/**
 * key_index - function to return the index of the key input
 * @key: the key input
 * @size:; the size of the linked list as bucket
 * Return: the index found as of the key input
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
