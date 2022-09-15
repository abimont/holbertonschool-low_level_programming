#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is lcated
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t ind;
	size_t l, h;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (l <= h)
	{
		ind = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (ind > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", ind);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);

		if (array[h] - array[l] == 0)
			return (-1);

		if (array[ind] < value)
			l = ind + 1;

		else if (array[ind] > value)
			h = ind - 1;

		else
			return (ind);
	}
	return (-1);
}
