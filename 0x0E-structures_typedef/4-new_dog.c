#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - initialize structure
 * @name: name of the struct
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer.
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *wuw;

	wuw = (dog_t *)malloc(sizeof(dog_t));
	if (wuw == NULL)
	{
		free(wuw);
		return (NULL);
	}
	wuw->name = name;
	wuw->age = age;
	wuw->owner = owner;
	return (wuw);
}
