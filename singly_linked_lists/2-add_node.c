#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the beginning of the list
 * @str: string to add
 *
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int new_len;

	new_len = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[new_len])
		new_len++;

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = new_len;
	*head = new_node;

	return (new_node);
}
