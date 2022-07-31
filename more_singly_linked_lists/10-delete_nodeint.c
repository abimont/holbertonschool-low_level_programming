#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: pointer to first node of the list
 * @index: position of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempnode;
	listint_t *prevnode;
	unsigned int comparision;

	tempnode = *head;
	prevnode = NULL;
	comparision = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tempnode->next;
		free(tempnode);
		return (1);
	}
	while (tempnode != NULL && comparision < index)
	{
		prevnode = tempnode;
		tempnode = tempnode->next;
		comparision++;
	}

	prevnode->next = tempnode->next;
	free(tempnode);

	return (1);
}
