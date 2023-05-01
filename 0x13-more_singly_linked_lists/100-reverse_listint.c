#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function to reverse the list
 * @head: the pointer to the head
 *
 * Return: the pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previ = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previ;
		previ = *head;
		*head = next;

	}
	*head = previ;


	return (*head);

}
