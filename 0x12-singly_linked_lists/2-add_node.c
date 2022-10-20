#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 * Return: address of the new element
 * Or NULL if the function fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
