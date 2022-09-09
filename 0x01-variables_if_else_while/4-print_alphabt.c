#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints a-z in lowercase and exempt e and q
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if ((alphabet != 'e') && (alphabet != 'q'))
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
