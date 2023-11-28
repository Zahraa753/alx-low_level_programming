#ifndef _DOG_H
#define _DOG_H

/**
*struct dog- new struct help me geting poppoes
*@name: child name
*@age: child age
*@owner: the owner
*Description: it is like object
*Return: nothing
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
