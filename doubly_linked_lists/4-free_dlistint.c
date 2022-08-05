#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
