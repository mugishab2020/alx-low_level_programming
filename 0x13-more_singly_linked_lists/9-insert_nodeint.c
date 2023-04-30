#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function to add node to a certain index
 * @head: the pointer to the head
 * @idx: the index specified
 * @n: the data for the node
 * Return: the NULL for siccess
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new;
	listint_t *tempo = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);

	}

	for (a = 0; tempo && a < idx; a++)
	{
		if (a == idx - 1)
		{
			new->next = tempo->next;
			tempo->next = new;
			return (new);
		}
		else
			tempo = tempo->next;

	}
	return (NULL);
}
