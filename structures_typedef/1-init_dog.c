#include <stdio.h>
#include "dog.h"
/**
* init_dog - Init struct of dog.
*
* Return: Always 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
