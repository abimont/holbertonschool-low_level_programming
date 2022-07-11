#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr_alloc = NULL;

	ptr_alloc = malloc(b);
	if (!ptr_alloc)
		exit(98);

	return (ptr_alloc);
}
