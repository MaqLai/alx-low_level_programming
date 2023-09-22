#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list.
 * @h: a pointer to the head of the linked list.
 *
 * Return: the number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
