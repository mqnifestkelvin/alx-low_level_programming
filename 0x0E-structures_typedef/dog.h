#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - structure defination for a dog
 *
 * @name: Character array.
 *
 * @age: float.
 *
 * @owner: character array.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
