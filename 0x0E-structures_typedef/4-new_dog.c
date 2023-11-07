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
	wuw->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	if (wuw->name == NULL)
	{
		free(wuw->name);
		return (NULL);
	}
	strcpy(wuw->name, name);
	wuw->age = age;
	wuw->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));
	if (wuw->owner == NULL)
	{
		free(wuw->owner);
		return (NULL);
	}
	strcpy(wuw->owner, owner);
	return (wuw);
	free(wuw);
}
