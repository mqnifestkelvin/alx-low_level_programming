#include "main.h"
/**
 * *cap_string - A function that capitalizes all words of a string.
 *
 * @s: The string passed
 *
 * Return: s
 *
 */
char *cap_string(char *s)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int flag, i, ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			for (ii = 0; sep[ii] != '\0'; ii++)
			{
				if (s[i - 1] == sep[ii])
				{
					flag = 1;
					break;
				}
			}
		}
	}
	if (flag == 1)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= ('a' - 'A');
		}
	}
	return (s)
}
