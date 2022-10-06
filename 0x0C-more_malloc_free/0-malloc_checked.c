#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - This function returns a pointer to the allocated memory.
 *
 * @b: The integer passed.
 *
 * Return: 98 failure
 * pointer to the allocated memory success.
 */
void malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
	{
		return (98);
	}

	return (ptr);

}
