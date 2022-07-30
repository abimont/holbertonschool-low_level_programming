#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the first node of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;

		printf("%i\n", h->n);

		h = h->next;
	}

	return (nodes);
}
