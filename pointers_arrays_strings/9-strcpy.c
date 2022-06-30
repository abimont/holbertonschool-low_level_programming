#include "main.h"
/**
 * *_strcpy - copies the string into a buffer
 * @dest: buffer
 * @src: string
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{

	while (*src != '\0')
	{
		*dest = *src;

		src++;
		dest++;
	}
	return (dest);
}
