#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function to print the linked list
 * @head: the pointer to the head
 * Return: the number of node printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t num = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		num++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			while (head != slow)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				num++;
				head = head->next;
				slow = slow->next;

			}
			printf("[%p] %d\n", (void *)head, head->n);
			return (num);
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
	}
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
					num++;
					head = head->next;

		}
		return (num);
	}
