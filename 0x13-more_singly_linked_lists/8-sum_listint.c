#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all data value
 * in a listint_t linked list.
 * @head: a pointer to the head of the linked list.
 *
 * Return: the sum of all 'n' values i the list. if the
 * list is empty, the function returns 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
