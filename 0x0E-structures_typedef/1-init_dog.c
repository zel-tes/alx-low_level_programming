#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize structure
 * @d: name of the structure
 * @name: name of the struct
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
