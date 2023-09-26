#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * in a listint_t linked list.
 * @head: a pointer to the head of the list.
 * @index: the index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ongoing = *head;
	listint_t *former = NULL;
	unsigned int i = 0;
	
	if (head == NULL || *head == NULL)
		return (-1);

	while (ongoing != NULL && i < index)
	{
		former = ongoing;
		ongoing = ongoing->next;
		i++;
	}

	if (ongoing == NULL)
		return (-1);

	if (former != NULL)
		former->next = ongoing->next;
	else
		*head = ongoing->next;

	free(ongoing);

	return (1);
}
