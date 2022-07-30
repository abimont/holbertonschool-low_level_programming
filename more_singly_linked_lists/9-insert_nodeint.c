#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node of the list
 * @idx: index of the list where the new node should be added
 * @n: node to add
 *
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *tmpindex;
	listint_t *previousindx;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	tmpindex = *head;
	newnode->n = n;
	while (idx != 0)
	{
		previousindx = tmpindex;
		tmpindex = tmpindex->next;
		--idx;
	}

	newnode->next = tmpindex;
	previousindx->next = newnode;

	return (newnode);
}
