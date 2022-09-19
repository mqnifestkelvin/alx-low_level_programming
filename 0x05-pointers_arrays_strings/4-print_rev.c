#include "main.h"
/**
 * main - A function that prints a string in reverse.
 *
 * @s: This is the string value.
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;:

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
