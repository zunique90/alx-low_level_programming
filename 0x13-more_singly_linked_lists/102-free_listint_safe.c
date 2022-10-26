#include "lists.h"
#include <stdlib.h>
/**
 * loop_listint_count - finds the loop in a linked list,
 * and returns the number of nodes that are unique
 * @head: pointer to the head node of the list
 *
 * Return: number of nodes that are unique
 * or 0 if there is no loop
 */
size_t loop_listint_count(listint_t *head)
{
	listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				nodes++;
			}
			slow = slow->next;
			while (slow != fast)
			{
				slow = slow->next;
				nodes++;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - frees a listint_t list that has a loop
 * @h: pointer to the head node of list to be free'd
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t size, i;

	size = loop_listint_count(*h);

	if (size == 0)
	{
		for (; h != NULL && *h != NULL; size++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (size);
}
