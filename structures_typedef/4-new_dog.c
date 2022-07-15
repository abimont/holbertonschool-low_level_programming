#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

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
	dog_t *newdog;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!newdog->name)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!newdog->owner)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i <= _strlen(name); i++)
		newdog->name[i] = name[i];

	newdog->age = age;

	for (i = 0; i <= _strlen(owner); i++)
		newdog->owner[i] = owner[i];

	return (newdog);
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

