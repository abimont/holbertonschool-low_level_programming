#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min, max;
	int middle;

	if (array == NULL)
		return (-1);

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		middle = (min + max) / 2;
		print_array(array, min, max);

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			min = middle + 1;

		else
			max = middle - 1;
	}
	return (-1);
}

/**
 * print_array - prints an array
 * @array: array to print
 * @start: index where array starts
 * @end: index where array ends
 *
 * Return: void
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t index;

	printf("Searching in array: ");
	for (index = start; index < end; index++)
	{
		printf("%d, ", array[index]);
	}
	printf("%d\n", array[end]);
}

