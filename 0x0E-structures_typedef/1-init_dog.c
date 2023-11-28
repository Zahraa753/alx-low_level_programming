#include "dog.h"
#include <stdio.h>

/**
*init_dog- initialization the dogs
*@d: pointer to othe
*@name: name of dogs
*@age: the dogs age
*@owner: the owner of dogs
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
