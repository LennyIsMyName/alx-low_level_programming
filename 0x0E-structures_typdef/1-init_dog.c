#include "dog.h"

/**
 * init_dog - initiates a dog structure.
 * @d: name of the structure.
 * @name: name of the dog.
 * @age: the dog's age.
 * @owner: the owner of the dog.
 * Return: the newly created dog structure.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
