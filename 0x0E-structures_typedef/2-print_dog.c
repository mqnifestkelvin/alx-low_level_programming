#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints struct dog.
 *
 * @d: Struct dog.
 */

void print_dog(dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");
		printf("Name: %s", d->age);
		printf("Name: %s", d->owner ? d->owner : "(nil)");

	}
}
