#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minumum limit
 * @max: maximum limit
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int i = 0, range = 0;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	array = malloc(sizeof(int) * (range));
	if (!array)
		return (NULL);

	for (i = 0; i < range && min <= max; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
