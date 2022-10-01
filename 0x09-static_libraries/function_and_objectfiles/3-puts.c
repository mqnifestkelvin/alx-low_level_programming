#include "main.h"
/**
 * _puts - A function prints a string followed by a new line.
 *
 * @str: This is the value assigned.
 *
 * Return: 0
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
