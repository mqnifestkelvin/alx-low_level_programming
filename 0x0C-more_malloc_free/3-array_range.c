#include "main.h"
#include <stdlib.h>

/**
 * *array_range - A function that creates an array of integers.
 *
 * @min: The starting integer.
 *
 * @max: The stoping integer.
 *
 * Return: return null if memory allocated is 0
 * or return array of integers if
 */

int *array_range(int min, int max)
{
	int i;
	int *mem = malloc(sizeof(int) * max - min + 1);

	if (min > max)
		return (0);

	if (mem == 0)
		return (0);

	for (i = 0; min + i <= max; i++)
		mem[i] = min + i;

	return (mem);
}
