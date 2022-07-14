#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new struct or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *ndname;
	char *ndowner;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	ndname = malloc((_strlen(name) + 1));
	ndowner = malloc((_strlen(owner) + 1));

	if (ndname == NULL || ndowner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	_strcpy(ndname, name);
	_strcpy(ndowner, owner);

	new_dog->name = ndname;
	new_dog->owner = ndowner;
	new_dog->age = age;

	return (new_dog);
}


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
