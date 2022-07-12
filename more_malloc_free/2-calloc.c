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
	void *mem_array = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_array = malloc(size * nmemb);
	if (!mem_array)
	{
		free(mem_array);
		return (NULL);
	}

	return (mem_array);

}
