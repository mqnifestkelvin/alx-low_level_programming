#include "main.h"
/**
 * _strcpy - This function copies strings pointed to by src.
 *
 * @dest: char type.
 *
 * @src: char type.
 *
 * Return: pointer to dest.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {

		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
