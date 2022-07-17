#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array that hold integers to check
 * @size: number of elements in the array
 * @cmp: function pointer to be used to compare values
 *
 * Return: index to the first return different to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array)
		return (-1);

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				break;
			if (i == size - 1)
				return (-1);
		}
	}

	return (i);
}
