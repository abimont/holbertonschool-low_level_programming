#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
