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
	unsigned int guide;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	tmpindex = *head;
	newnode->n = n;
	guide = 0;

	if (tmpindex == NULL)
	{
		newnode->next = NULL;
		tmpindex = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = tmpindex;
		tmpindex = newnode;
		return (newnode);
	}
	while (tmpindex != NULL && guide < idx)
	{
		if (tmpindex == NULL && guide < idx)
			return (NULL);

		previousindx = tmpindex;
		tmpindex = tmpindex->next;
		guide++;
	}

	newnode->next = tmpindex;
	previousindx->next = newnode;

	return (newnode);
}
