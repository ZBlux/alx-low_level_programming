#include <stdio.h>
#include "dog.h"

/**
 *print_dog- function that prints a dog's name age and owner
 *
 *@d: structure holding variables
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
}
