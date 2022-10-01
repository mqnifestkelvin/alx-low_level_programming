#include "main.h"
/**
 * *_strcat - This function concatenates two strings
 *
 * @dest: The strings to be concatenated.
 *
 * @src: The second string to be concatenated.
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
