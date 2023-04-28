#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function to add a node of integer type
 * @head: pointer to the head
 * @n: the integer to be added
 *
 * Return: NULL pointer as the a=end of the list
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);
new->n = n;
new->next = *head;
*head = new;

return (new);
}
