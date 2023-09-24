#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node, starting at 0.
 *
 * Return: if the node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int add = 0;

	while (head != NULL)
	{
		if (add == index)
			return (head);
		add++;
		head = head->next;
	}

	return (NULL);
}
