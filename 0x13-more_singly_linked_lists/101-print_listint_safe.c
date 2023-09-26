#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ongoing = head;
	size_t i = 0;

	while (ongoing != NULL)
	{
		printf("[%p] %d\n", (void *)ongoing, ongoing->n);
		i++;

		if (ongoing->next >= ongoing)
		{
			printf("-> [%p] %d\n", (void *)ongoing->next, ongoing->next->n);
			break;
		}
		ongoing = ongoing->next;
	}
	return (i);
}
