#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - This function returns a pointer to the allocated memory.
 *
 * @b: The integer passed.
 *
 * Return: 98.
 */
void malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}

	return (ptr);

}
