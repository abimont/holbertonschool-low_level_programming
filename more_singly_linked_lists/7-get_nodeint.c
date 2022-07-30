#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: first node of the list
 * @index: number of position of the node to return
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iterator;
	listint_t *tmp;

	iterator = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		if (index == iterator)
			break;
		iterator++;
	}

	if (index > iterator)
		return (NULL);

	return (tmp);
}
