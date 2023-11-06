#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints the dog's features
 * @d: dog strycture
 *
 * Return: Nothing.
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
