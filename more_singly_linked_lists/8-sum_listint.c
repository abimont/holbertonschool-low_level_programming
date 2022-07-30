#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: first node of the list
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *data;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		data = head;
		head = head->next;
		sum += data->n;
	}

	return (sum);
}
