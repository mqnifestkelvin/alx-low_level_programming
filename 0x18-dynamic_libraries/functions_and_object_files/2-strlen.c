#include "main.h"
/**
 * _strlen - This function checks the length of a string.
 *
 * @s: This accepts a string value
 *
 * Return: 0
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
