#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the head node of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	copy = NULL;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		(*head)->next = copy;
		copy = *head;
		*head = temp;
	}
	(*head)->next = copy;

	return (*head);
}
