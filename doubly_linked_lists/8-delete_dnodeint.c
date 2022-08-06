#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: pointer to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node, *prev_node, *next_node;
	unsigned int i;

	temp_node = *head;
	prev_node = NULL;
	next_node = NULL;
	i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);

		next_node = temp_node->next;
		*head = next_node;
		free(temp_node);
		return (1);
	}

	while (temp_node != NULL && i < index)
	{
		prev_node = temp_node;
		temp_node = temp_node->next;
		i++;
	}
	if (temp_node == NULL && i < index)
		return (-1);

	next_node = temp_node->next;

	next_node->prev = prev_node;
	prev_node->next = next_node;
	free(temp_node);

	return (1);
}
