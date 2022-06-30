#include <stdio.h>
#include "dog.h"
/**
* init_dog - Init struct of dog.
* @d: pointer of the element type dog.
* @name: name of the dog.
* @age: age of the dog.
* @owner: owner of dog.
* Return: If not exec return.
*/
void print_dog(struct dog *d)
{
	if (!d)	
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
