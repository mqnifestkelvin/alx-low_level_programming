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
		dog *ptr;
		ptr = d;

		(*ptr).name = name;
		(*ptr).age = age;
		(*ptr).owner = owner;
	}
}
