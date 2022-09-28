#define "main.h"
/**
 * _print_rev_recursion - This function print a string in reverse.
 *
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
