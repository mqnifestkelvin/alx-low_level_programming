#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string.
 *
 * @s: The string passed.
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
