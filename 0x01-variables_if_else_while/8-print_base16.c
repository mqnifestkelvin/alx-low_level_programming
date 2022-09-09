#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints all the numbers of base 16
 * in lowercase.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
