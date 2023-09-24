#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the end of the list.
 *
 * Description: this function frees the memory
 * allocated for each node in the list.
 */

void free_listint(listint_t *head)
{
	listint_t *ongoing;

	while (head != NULL)
	{
		ongoing = head;
		head = head->next;
		free(ongoing);
	}
}
