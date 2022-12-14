#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - A function that returns a newly allocated space in memory
 * which contains a copy of the sting given as a parameter.
 *
 * @str: This is the string passed.
 *
 * Return: returns Null if str argument is NULL and returns a stirng
 * on success.
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *mem;

	if (str == 0)
	{
		return (0);
	}
	for (; str[size] != '\0'; size++)
		;

	mem = malloc(size * sizeof(*str) + 1);

	if (mem == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
		{
			mem[i] = str[i];
		}
	}
	return (mem);


}
