#include "main.h"
/**
 * *leet - This function encodes a string into 1337.
 *
 * @str: This pointer to the string
 *
 * Return: The encoded string.
 *
 */
char *leet(char *str)
{
	int i = 0, ii;

	char leet[] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (ii = 0; ii <= 7; ii++)
		{
			if (str[i] == leet[ii] ||
				str[i] - 32 == leet[ii])
				str[i] = ii + '0';
		}
		i++;
	}
	return (str);

}

