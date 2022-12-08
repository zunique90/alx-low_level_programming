#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head node of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t n = 0;

	tmp = h;
	while (tmp != 0)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n++;
	}
	return (n);
}
