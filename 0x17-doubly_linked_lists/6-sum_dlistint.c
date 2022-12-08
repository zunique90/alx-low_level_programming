#include "lists.h"
/**
 * sum_dlistint - sums all the data(n) of a dlistint_t linked-list
 * @head: pointer to the head node of the list
 * Return: sum of all the data(n) in the list.
 * OR 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
