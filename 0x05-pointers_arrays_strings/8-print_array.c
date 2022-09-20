#include "main.h"
#include <stdio.h>
/**
 * print_array - A function that prints an array of integers.
 *
 * @a: The array passed.
 *
 * @n: The number of elements of the array.
 *
 * Return: 0
 *
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n")
}
