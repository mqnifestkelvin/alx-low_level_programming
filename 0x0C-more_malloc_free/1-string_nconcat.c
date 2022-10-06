#include "main.h"
#include <stdlib.h>

/**
 * _strlen - A prograam that returns the length of a string.
 *
 * @s: The string passed.
 *
 * Return: int.
 */
unsigned int _strlen(char *s)
{
	unsigned int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}

/**
 * *string_nconcat - This function concatenates two strings.
 *
 * @s1: An arry passed.
 *
 * @s2: An array passed.
 *
 * @n: The first byte of s2 array passed and also null terminated.
 *
 * Return: 0 or empty string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *mem;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	if (n < _strlen(s2))
		mem =  malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		mem = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (mem == 0)
		return (0);

	for (i = 0; s2[i] != '\0'; i++)
		mem[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		mem[i] = s2[j];

	mem[i] = '\0';

	return (mem);
}
