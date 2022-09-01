#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;
	hash_node_t *q = NULL;

	if (!ht)
		return;

	if (ht)
	{
		if (ht->array)
		{
			for (; index <= ht->size; index++)
			{
				temp = ht->array[index];

				while (temp)
				{
					q = temp->next;
					free(temp->value);
					free(temp->key);
					free(temp);
					temp = q;
				}
			}
			free(ht->array);
			ht->array = NULL;
		}
		free(ht);
		ht = NULL;
	}
}
