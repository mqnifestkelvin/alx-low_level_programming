#include "main.h"
/**
 * *_strncat - This function concatenates two strings,
 * it uses at most n bytes from src.
 *
 * @dest: The first string to be apended.
 *
 * @src: The second apended string.
 *
 * @n: number of bytes.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
