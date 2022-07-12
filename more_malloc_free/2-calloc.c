#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of bytes
 * @size: size of bytes
 * Return: pointer to mem_array or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_array;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	mem_array = malloc(size * nmemb);
	if (mem_array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem_array[i] = 0;

	return (mem_array);

}
