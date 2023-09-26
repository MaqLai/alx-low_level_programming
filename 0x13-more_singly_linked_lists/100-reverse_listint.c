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
	listint_t *rest = reverse_listint(&(*head)->next);

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	(*head)->next->next = *head;
	(*head)->next = NULL;

	return (rest);
}
