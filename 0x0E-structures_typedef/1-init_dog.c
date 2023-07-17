#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - initialize a variable struct dog
 *
 *@d: a pointer to struct dog
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 *
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
