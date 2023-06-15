#include "lists.h"

/**
 * insert_dnodeint_at_index - function for adding new node at a given position
 * @node: pointer to the head of the list
 * @idx: index of the list for node to be added
 * @n: value of the node
 * Return: address for the next node || NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **node, unsigned int idx, int n)
{
	dlistint_t *new_node, *tempo = *node;
	unsigned int a = 0;

	if (node == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		if (*node != NULL)
			(*node)->prev = new_node;
		new_node->next = *node;
		*node = new_node;
	}

	while (a < idx - 1)
	{
		if (tempo == NULL)
			return (NULL);
		tempo = tempo->next;
		a++;
	}
	if (tempo == NULL)
		return (NULL);
	new_node->next = tempo->next;
	new_node->prev = tempo;
	if (tempo->next == new_node)
		tempo->next->prev = new_node;
	tempo->next = new_node;
	return (new_node);
}
