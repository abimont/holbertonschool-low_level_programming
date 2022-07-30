#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: first element of the list
 * @n: node to add
 *
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	newnode = NULL;
	lastnode = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;

	return (newnode);
}
