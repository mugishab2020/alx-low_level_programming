#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - function to add node at the end of th list
 * @head: the poitner to the head
 * @n: data for the node to be added
 *
 * Return: the NULL pointer as the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);

	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
