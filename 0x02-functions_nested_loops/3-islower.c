#include "main.h"
/**
 * int _islower
 *
 * Description: This program checks for lowercase character.
 *
 * Return: 0
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer in c*/
		if (c == 1)
		{
			return (1);
		}

	}
	return (0);
}
