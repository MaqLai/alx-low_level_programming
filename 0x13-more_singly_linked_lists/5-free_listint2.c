#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: a pointer to the head of the list.
 *
 * Description: the function iterates through the linked list,
 * starting from the head, and frees each node.
 */

void free_listint2(listint_t **head)
{
	listint_t *ongoing;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	ongoing = *head;

	while (ongoing != NULL)
	{
		next_node = ongoing->next;
		free(ongoing);
		ongoing = next_node;
	}
	*head = NULL;
}
