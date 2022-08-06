#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: pointer to the first node of the list
 *
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *num;

	sum = 0;
	while (head)
	{
		num = head;
		sum = sum + num->n;
		head = num->next;
	}

	return (sum);
}
