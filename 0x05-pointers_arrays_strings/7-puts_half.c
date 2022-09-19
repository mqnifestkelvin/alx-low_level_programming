#include "main.h"
/**
 * puts_half - A function that prints halfof a string.
 *
 * @str: The string value passed.
 *
 * Return: 0
 *
 */
void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (int a = (i + 1) / 2; str[a] != '\0'; a++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
