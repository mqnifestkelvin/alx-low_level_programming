#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initialize the variable of type `struct dog`.
 *
 * @d: struct dog.
 *
 * @name: Character array.
 *
 * @age: float.
 *
 * @owner: Character array.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d.name = name;
		d.age = age;
		d.owner = owner;
	}
}
