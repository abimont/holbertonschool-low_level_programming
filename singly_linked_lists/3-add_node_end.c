#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: first node of the list
 * @str: node to add
 *
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	unsigned int new_len;

	new_node = NULL;
	last_node = *head;
	new_len = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[new_len])
		new_len++;

	new_node->str = strdup(str);
	new_node->next = NULL;
	new_node->len = new_len;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
