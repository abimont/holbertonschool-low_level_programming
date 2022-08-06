#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node of the list
 * @idx: position to insert the new node
 * @n: new node to insert
 *
 * Return: address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp_node;
	dlistint_t *prev_node;
	unsigned int current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	temp_node = *h;
	prev_node = NULL;
	current = 0;
	if (idx == 0)
	{
		new_node->next = temp_node;
		new_node->prev = NULL;
		*h = new_node;

		return (new_node);
	}
	while (temp_node != NULL && current <= idx)
	{
		prev_node = temp_node;
		temp_node = temp_node->next;
		current++;
	}
	if (temp_node == NULL && current < idx)
		return (NULL);

	prev_node = prev_node->prev;
	temp_node = temp_node->prev;
	new_node->next = temp_node;
	new_node->prev = prev_node;
	temp_node->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
