#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ongoing, *next;
	size_t i = 0;

	if (h == NULL || *h == NULL)
		return (i);

	ongoing = *h;

	while (ongoing != NULL)
	{
		next = ongoing->next;
		free(ongoing);
		i++;

		if (next >= ongoing)
			break;

		ongoing = next;
	}
	*h = NULL;

	return (i);
}
