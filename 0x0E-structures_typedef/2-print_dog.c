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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

	}
}
