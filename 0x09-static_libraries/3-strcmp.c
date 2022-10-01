#include "main.h"
/**
 * _strcmp - This function compares two strings.
 *
 * @s1: String 1.
 *
 * @s2: String 2.
 *
 * Return: 0 if the compared strings are similar,
 * and ns1 - ns2 of they are dissimilar.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
