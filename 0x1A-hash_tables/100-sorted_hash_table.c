#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the sorted hash table
 * Return: a pointer to the new sorted hash table
 * OR NULL, if something went wrong
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_ht;

	new_ht = malloc(sizeof(shash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = malloc(sizeof(shash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;
	new_ht->shead = NULL;
	new_ht->stail = NULL;

	new_ht->size = size;

	return (new_ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: the sorted hash table to add or update the key/value to.
 * @key: the key
 * @value: the value associated with the key.
 * Return: 1 if it succeeds, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL || !*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);

		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_node;
		else
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the sorted hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key could'nt be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hsh;
	shash_node_t *tmp;

	if ((ht == NULL) || (key == NULL || *key == '\0'))
		return (NULL);

	hsh = key_index((const unsigned char *)key, ht->size);
	if (hsh >= ht->size)
		return (NULL);

	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
