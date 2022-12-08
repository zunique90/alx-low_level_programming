#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistintT list
 * @head: pointer to the head node of the list
 * @n: data tp stored in the new node
 * Return: the address of the new element, or NULL it it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = newnode;
	newnode->prev = end;

	return (newnode);
}
