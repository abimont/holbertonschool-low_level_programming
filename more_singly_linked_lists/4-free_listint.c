#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: first node of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
