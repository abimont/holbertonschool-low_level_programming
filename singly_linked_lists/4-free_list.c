#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: pointer to first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}
