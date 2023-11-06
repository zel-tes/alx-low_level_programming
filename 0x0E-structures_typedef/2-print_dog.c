#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <math.h>
/**
 * print_dog - prints the dog's features
 * @d: dog strycture
 *
 * Return: Nothing.
 **/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (isnan(d->age))
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d == NULL)
		exit(1);
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
