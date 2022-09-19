#include "main.h"
/**
 * print_rev - A function that prints a string in reverse.
 *
 * @s: This is the string value.
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
