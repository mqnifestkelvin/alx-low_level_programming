#include "main.h"
/**
 * _puts_recursion - This program makes use of a recursion
 * to write a character.
 *
 * @s: The character to print.
 *
 * Return: One success 1.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
