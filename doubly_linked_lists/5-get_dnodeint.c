#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node of the list
 * @index: position of the node to return
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int guide;
	dlistint_t *temp_node;
	dlistint_t *current_node;

	if (head == NULL)
		return (NULL);
	
	guide = 0;
	temp_node = head;
	while (temp_node != NULL && guide <= index)
	{
		current_node = temp_node;
		temp_node = temp_node->next;
		guide++;
	}

	if (temp_node == NULL && guide < index)
		return (NULL);

	return (current_node);
}
