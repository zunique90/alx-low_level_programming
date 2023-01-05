#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key could'nt be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hsh;
	int i = 0;

	if ((ht == NULL) || (key == NULL))
		return (NULL);

	hsh = hash_djb2((const unsigned char *)key);
	i = hsh % (ht->size);

	if (ht->array[i] == 0)
		return (NULL);
	while (ht->array[i])
	{
		if (strcmp(key, ht->array[i]->key) == 0)
			return (ht->array[i]->value);
		ht->array[i] = ht->array[i]->next;
	}
	return (NULL);
}
