#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked listint_t list
 * @head: pointer to the head node of the list
 *
 * Return: the sum of all the data (n) in the list
 * Or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
