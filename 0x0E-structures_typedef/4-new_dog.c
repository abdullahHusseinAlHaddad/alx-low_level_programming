#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - search about the length of string.
 * @str: The string.
 * Return: The length of string.
 */
int _strlen(const char *str)
{
	int ln = 0;

	while (*str++)
		ln++;
	return (ln);
}

/**
 * _strcopy - Copy a string.
 * @dest: the string copy.
 * @src: The string.
 * Return: pointer.
 */
char *_strcopy(char *dest, char *src)
{
	int dex;

	for (dex = 0; src[dex]; dex++)
		dest[dex] = src[dex];
	dest[dex] = '\0';
	return (dest);
}

/**
 * *new_dog - create a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: The owner of the dog.
 * Return: struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
