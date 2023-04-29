#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - function to add all node of the list
 * @head: the pointer to the head of the list
 *
 * Return: the summation of the lists nodes
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}
	return (sum);
}
