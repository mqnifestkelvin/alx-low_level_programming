#include "main.h"
#include <stdlib.h>
/**
 * _strlen - finds the length of a string
 *
 * @s: The string passed.
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - This function conccatenates two strings.
 *
 * @s1: String to be concatenated.
 *
 * @s2: Another string to be concatenated.
 *
 * Return: Return pointer to the memory allocated
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int length_a, length_b, i;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	length_a = _strlen(s1);
	length_b = _strlen(s2);
	mem = malloc((length_a + length_b) * sizeof(char) + 1);

	if (mem == 0)
	{
		return (0);
	}
	for (i = 0; i <= length_a + length_b; i++)
	{
		if (i < length_a)
		{
			mem[i] = s1[i];
		}
		else
		{
			mem[i] = s2[i - length_a];
		}
	}
	mem[i] = '\0';
	return (mem);
}
