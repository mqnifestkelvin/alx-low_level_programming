#include "main.h"
/**
 * factorial - This function returns the factoria of a number.
 *
 * @n: This is the number of iterations.
 *
 * Return: returns the facctoria number.
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
