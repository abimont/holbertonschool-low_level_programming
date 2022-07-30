#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: first node of the list
 *
 * Return:  void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = NULL;

	while (*head)
	{
		if (!head)
			break;

		temp = *head;
		*head = temp->next;
		if (temp->next == NULL)
			*head = NULL;

		free(temp);
	}
}
