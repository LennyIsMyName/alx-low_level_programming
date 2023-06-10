#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/** print_dog - prints a dog structure.
 * @d: the dog structure.
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
