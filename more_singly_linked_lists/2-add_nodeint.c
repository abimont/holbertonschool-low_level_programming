#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: current first node of  the list
 * @n: node to add
 *
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	if (*head != newnode)
		return (NULL);

	return (newnode);
}
