#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function to free head;
 * @head: the pointer to the head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
