#include "lists.h"
/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds, or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newnode, *temp;
	unsigned int n;

	temp = *head;
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}
	newnode = temp->next;
	temp->next = newnode->next;
	free(newnode);

	return (1);
}
