#include "lists.h"
/**
 * dlistint_len - function to print the lenth of the list
 * @h: pointer to the head of the list
 * Return: number of the lement of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
