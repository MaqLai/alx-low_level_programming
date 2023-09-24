#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node with data 'n' at a
 * specified index in the linked list.
 * @head: a pointer to the head of the linked list.
 * @idx: the index at which the new node should be inserted.
 * @n: the integer value to be stored in the new node.
 *
 * Return: the address of the new node if the insertion
 * is successful, or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ongoing;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ongoing != NULL && i < (idx - 1); i++)
	{
		ongoing = ongoing->next;
	}

	if (ongoing == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = ongoing->next;
	ongoing->next = new_node;

	return (new_node);
}
