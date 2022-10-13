#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This function returns the sun of a variable
 * number of variable passed as arguements.
 *
 * @n: The number of arguments to be passed.
 *
 * Return: sum of all args.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;
	int i, sum = 0;
	
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
