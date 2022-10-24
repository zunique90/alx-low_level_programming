#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head node of list to be free'd
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *copy, *temp;
	size_t size = 0;

	temp = *h;
	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		size++;
		copy = temp;
		temp = temp->next;
		free(copy);
		if (copy < temp)
			break;

		*h = NULL;
	}
	return (size);
}
