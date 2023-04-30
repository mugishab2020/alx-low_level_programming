#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - fn to delete the node from a specified index
 * @head: the pointer to the haed
 * @index: the specified index for node to delete
 *
 * Return: index number deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (a < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		a++;
	}
	current = tempo->next;
	tempo->next = current->next;
	free(current);

	return (1);
}
