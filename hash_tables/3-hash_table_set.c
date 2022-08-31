#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element = NULL;
	unsigned long int index = 0;

	if (!key || !ht)
		return (0);

	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);

	new_element->key = strdup(key);
	new_element->value = strdup(value);

	if (ht->array[index] && strcmp(key, ht->array[index]->key) != 0)
		new_element->next = ht->array[index];

	ht->array[index] = new_element;

	return (1);
}
