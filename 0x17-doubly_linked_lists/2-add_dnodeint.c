#include "lists.h"
/**
 * add_dnodeint - function for adding the new node at the beginning
 * @head: pointer to the begnig of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	node = *head;

	if (node != NULL)
	{
		while (node->prev != NULL)
			node = node->prev;
	}

	new_node->next = node;

	if (node != NULL)
		node->prev = new_node;

	*head = new_node;

	return (new_node);
}
