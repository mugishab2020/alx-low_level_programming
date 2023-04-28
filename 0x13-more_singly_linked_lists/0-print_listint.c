#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function to all list element
 * @h: the link to the head
 *
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	size_t  num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;

	}
	return (num);
}
