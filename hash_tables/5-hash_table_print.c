#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int n = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; ht && index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			if (node->key != NULL && n == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			n = 1;

		}
	}
	printf("}");
	printf("\n");
}
