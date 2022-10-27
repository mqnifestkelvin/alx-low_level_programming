#include "main.h"
#include <string.h>
unsigned int binary_to_uint(const cahr *b)
{
	int slen = strlen(string);
	int total = 0;
	int decval = 1;
	int i;

	for (i = (slen - 1); i >= 0; i--}
			{
				if (string[i] == '1')
				{
					total += decval;
					decval *= 2;
				}
			}
			return (total);
}
