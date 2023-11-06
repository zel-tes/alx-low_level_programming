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
	struct dog *p = d;

	p->name = name;
	p->age = age;
	p->owner = owner;
}
