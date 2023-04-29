#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function to node on certain index
 * @head: the pointer to the node
 * @index: the index number of the node to return
 *
 * Return: the pointer to the node to the index provided
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempo = head;
	unsigned int a = 0;

	while (tempo && a < index)
	{
		tempo = tempo->next;
		a++;
	}
	return (tempo ? tempo : NULL);

}
