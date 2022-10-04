#include <stdlib.h>
/**
 * *create_array - This program creates an array of characters.
 *
 * @size: This is the amount of element present in the array.
 *
 * @c: character passsed.
 *
 * Return: A pointer to the array initiated or 0.
 */
char *create_array(unsigned int size, char c)
{
	char *mem = malloc(size);

	if (size == 0 || mem == 0)
	{
		return (0);
	}
	while (size++)
	{
		mem[size] = c;
	}
	return (mem);
}
