#include "hash_tables.h"
#include <string.h>

void replace_value(hash_node_t **ht, const char *key, const char *value);
int check_key(hash_node_t *ht, const char *key);
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (check_key(ht->array[index], key))
	{
		replace_value(&ht->array[index], key, value);
		return (1);
	}

	add_node(&ht->array[index], key, value);
	if (&ht->array[index] == NULL)
		return (0);

	return (1);
}

/**
 * replace_value - replaces the value in a existing key
 * @ht: pointer to hash_node_t
 * @key: node to add the value
 * @value: value to add in the node
 */
void replace_value(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;

	free(temp->value);
	temp->value = strdup(value);
}

/**
 * check_key - checks for a key in a hash table
 * @ht: pointer to hash_node_t
 * @key: key to look for
 *
 * Return: 1 if the key is found, 0 otherwise
 */
int check_key(hash_node_t *ht, const char *key)
{
	while (ht)
	{
		if (!strcmp(ht->key, key))
			return (1);

		ht = ht->next;
	}

	return (0);
}

/**
 * add_node - adds a node at the beginning of alist
 * @head: pointer to the head of the list
 * @key: key to add
 * @value: value to add to the key
 *
 * Return: address of the new element, or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = (*head);
		(*head) = new_node;
	}

	return (*head);
}
