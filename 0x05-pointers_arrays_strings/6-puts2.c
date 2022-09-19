#include "main.h"
/**
 * puts2 - This function prints every other character of a string,
 * starting with the firsy character.
 *
 * @str: The string passed.
 *
 * Return: 0
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
