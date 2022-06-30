#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination pointer
 * @src: origin pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i))
	{
		i++;
	}

	while ((*(dest + i) = *(src + i)))
	{
		i++;
		j++;
	}

	return (dest);

}
