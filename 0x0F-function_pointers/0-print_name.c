#include " function_pointers.h"

/**
 * print_name - Prints name.
 *
 * @name: Name to be printed.
 *
 * @f: Function required for printing.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
