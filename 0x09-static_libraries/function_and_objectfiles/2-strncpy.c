#include "main.h"
/**
 * *_strncpy - This function copies a string.
 *
 * @dest: Pointer to a string.
 *
 * @src: Pointer.
 *
 * @n: int (number of copies).
 *
 * Return: dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
