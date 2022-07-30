#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: first node of the list
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int ndata;
	listint_t *temp;

	if (!head)
		return (0);

	temp = *head;
	ndata = temp->n;
	*head = temp->next;
	free(temp);

	return (ndata);
}
