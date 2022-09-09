#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints a-z backwards.
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet =  'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
