#include <stdio.h>
#include "dog.h"

/**
*_length- length fun
*@str: the passed array
*Return: length
*/
int _length(const char *str)
{
	int length = 0;

	while (*str++)
	length++;
	return (length);
}

/**
*_copy- copying the data
*@to: dastinatio
*@from: the source
*Return: to
*/

char *_copy(char *to, char *from)
{
	int i;

	for (i = 0; from[i]; i++)
	to[i] = from[i];
	to[i] = '\0';
	return (to);
}
/**
*new_dog- the main func
*@name: the dog name
*@age: the dog age
*@owner: the dog owner
*Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (length(name) + 1);
	if ((*dog).name == NULL)
	{
	free(dog;
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length(owner) + 1);
	if ((*dog).owner == NULL)
	{
	free(dog->name);
	free(dog)
	return (NULL);
	}
	dog->name = _copy(dog->name, name);
	dog->age = age;
	dog->owner = _copy(dog->owner, owner);
	return (dog);
}
