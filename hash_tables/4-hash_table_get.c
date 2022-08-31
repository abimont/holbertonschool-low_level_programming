#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to looking for
 *
 * Return: value associated with element or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list;
	unsigned long int index = 0;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	index = key_index((unsigned const char *) key, ht->size);

	for (list = ht->array[index]; list != NULL; list = list->next)
	{
		if (strcmp(key, list->key) == 0)
			return (list->value);
	}
	return (NULL);
}
