#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	hash_node_t **hash_n;
	unsigned long int index;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;

	hash_n = malloc(sizeof(hash_node_t *) * size);
	if (hash_n == NULL)
		return (NULL);

	hash_t->array = hash_n;

	for (index = 0; index < size; index++)
		hash_t->array[index] = NULL;

	return (hash_t);
}
