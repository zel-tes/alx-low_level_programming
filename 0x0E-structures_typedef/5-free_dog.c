#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - initialize structure
 * @d: name of the structure
 *
 * Return: Nothing.
 **/
void free_dog(dog_t *d)
{
	free(d);
}
