#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination pointer
 * @src: origin pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	const char *src_ptr;
	char *dest_ptr;

	for (dest_ptr = dest; *dest_ptr != '\0'; dest_ptr++)
	;

	for (src_ptr = src; *src_ptr != '\0'; src_ptr++, dest_ptr++)
	{
		*dest_ptr = *src_ptr;
	}

	*dest_ptr = '\0';
	return (dest);
}
