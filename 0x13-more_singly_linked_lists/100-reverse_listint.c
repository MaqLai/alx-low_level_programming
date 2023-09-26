#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: a pointer to the head of the list.
 *
 * Return: a pointer to the node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *ongoing = *head;
	listint_t *next;

	while (ongoing != NULL)
	{
		next = ongoing->next;
		ongoing->next = prev;
		prev = ongoing;
		ongoing = next;
	}

	*head = prev;

	return (prev);
}
