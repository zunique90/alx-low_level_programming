#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of list to be freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
