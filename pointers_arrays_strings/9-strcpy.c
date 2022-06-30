#include "main.h"
/**
 * *_strcpy - copies the string into a buffer
 * @dest: buffer
 * @src: string
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
