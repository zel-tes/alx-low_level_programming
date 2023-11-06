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
	dog_t *boby;

	boby = (dog_t *)malloc(sizeof(dog_t));
	if (boby == NULL)
	{
		return (NULL);
		free(boby);
	}
	boby->name = name;
	boby->age = age;
	boby->owner = owner;
	return (boby);
}
