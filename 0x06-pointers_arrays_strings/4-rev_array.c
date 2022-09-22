#include "main.h"
/**
 * reverse_array - This function reverses an array.
 *
 * @a: An array of integers.
 *
 * @n: The number of elements to swap.
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
