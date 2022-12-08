#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
