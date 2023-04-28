#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function to return the number of list element
 *@h: the pointer to the head
 *Return: the number of element of list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	/**
	 *printf("%d\n", num);
	 *if we want to print
	 */
	return (num);
}
