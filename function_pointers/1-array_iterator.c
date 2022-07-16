#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t iterations;

	if (!array)
		return;

	for (iterations = 0; iterations < size; iterations++)
		action(array[iterations]);
}
