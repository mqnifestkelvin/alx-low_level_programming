#include <stdio.h>
/**
 * main - Entry point
 * Description: This prints all single digits number of base 10
 * starting from 0 using only putchar and without declearing
 * using char
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
