#include "main.h"

/**
 **_memcpy - copies memory area
 *@dest: destiny of memory area
 *@src: source of memory area
 *@n: number of bytes to copy
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
