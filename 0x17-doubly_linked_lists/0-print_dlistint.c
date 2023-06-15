#include "lists.h"

/**
 * print_dlistint - fu8nction for printing dlistint_t element
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number;

	number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
