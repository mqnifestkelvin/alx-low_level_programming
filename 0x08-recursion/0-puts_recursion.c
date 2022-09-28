#include <unistd.h>
/**
 * _putchar - This program makes use of a recursion to write a character.
 *
 * @c: The character to print.
 *
 * Return: One success 1.
 */
int  _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
