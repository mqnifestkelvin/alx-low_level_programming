#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Prints the length of a string.
 *
 * @s: The string passed.
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - Copies a pointed string
 *
 * @dest: pointer to the destination string.
 *
 * @src: pointer to the source string.
 *
 * Return: pointer of destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - A function that creates a new dog.
 *
 * @name: Character array.
 *
 * @age: Float.
 *
 * @owner: Character array.
 *
 * Return: Pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == 0)
		return (0);

	len_name = _strlen(name);
	new_dog->name = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->name == 0)
	{
		free(new_dog);
		return (0);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	len_owner = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * len_owner + 1);
	if (new_dog->owner == 0)
	{
		free(new_dog->name);
		free(new_dog);
		return (0);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
