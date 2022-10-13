#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - This function prints any amount of string passed
 * as arguement.
 *
 * @separator: This any character passed to be used as a separator for
 * each strings.
 *
 * @n: This is the number of arguements/strings passed.
 *
 * Return: Prints the String arguements passed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);

		if (ptr == 0)
		{
			printf("(nil)");
		}

		else
		{

			printf("%s", ptr);
		}

		if (i != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
