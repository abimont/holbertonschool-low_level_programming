#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t index;
	size_t min, max;

	if (array == NULL)
		return (-1);

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		index = min + (((double)(max - min) / (array[max] - array[min])) * (value - array[min]));

		if (index > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", index);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[max] - array[min] == 0)
			return (-1);

		if (array[index] < value)
			min = index + 1;

		else if (array[index] > value)
			max = index - 1;

		else
			return (index);
	}
	return (-1);
}
