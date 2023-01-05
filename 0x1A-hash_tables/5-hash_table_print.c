#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *d;

	if (ht == NULL)
		return;
	printf("{");
	d = "";
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", d, tmp->key, tmp->value);
			d = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
