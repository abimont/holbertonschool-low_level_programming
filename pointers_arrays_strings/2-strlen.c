#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: pointer
 *Return: s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
