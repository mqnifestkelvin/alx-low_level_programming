#include "main.h"
/**
 * swap_int - This fuction swaps the values of two integers.
 *
 * @a: an integer value to be swapped.
 *
 * @b: another integer value of be swapped.
 *
 * Return: 0
 *
 */
void swap_int(int *a, int *b)
{
	int *a, *b;

	a = &b;
	b = &a;
	*a = b;
	*b = a;
}
